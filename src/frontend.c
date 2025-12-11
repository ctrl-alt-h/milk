#include "frontend.h"
#include <raylib.h>

static void mk_update(const struct mk_ticket_cat *arr_ptr, size_t n) {
}

static void mk_draw(const struct mk_ticket_cat *arr_ptr, size_t n) {
	ClearBackground(RAYWHITE);
	DrawText("MILK", 190, 200, 20, LIGHTGRAY);
}

void mk_draw_loop(const struct mk_ticket_cat *arr_ptr, size_t n) {
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);

	const int screenWidth  = 800;
	const int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "milk");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		mk_update(arr_ptr, n);
		BeginDrawing();
		mk_draw(arr_ptr, n);
		EndDrawing();
	}
	CloseWindow();
}
