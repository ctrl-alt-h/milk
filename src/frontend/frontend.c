#include "frontend.h"
#include <raylib.h>

static void mk_update(const struct mk_frontend *f) {
}

static void mk_draw(const struct mk_frontend *f) {
	ClearBackground(RAYWHITE);
	DrawText("MILK", 190, 200, 20, LIGHTGRAY);

	f->callbacks->add_ticket("test");
}

void mk_frontend_init(struct mk_frontend *f, const struct mk_controller_callbacks *cbs) {
	f->ticket_cats = NULL;
	f->n_ticket_cats = 0;
	f->callbacks = cbs;
}

void mk_draw_loop(const struct mk_frontend *f) {
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);

	const int screenWidth  = 800;
	const int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "milk");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		mk_update(f);
		BeginDrawing();
		mk_draw(f);
		EndDrawing();
	}
	CloseWindow();
}
