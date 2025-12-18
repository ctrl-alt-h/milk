#include "context.h"
#include "frontend/frontend.h"
#include <stdio.h>
#include <raylib.h>

void mk_print_help(void) {
	printf("Usage: milk <options>\n");
}

void mk_context_init(struct mk_context *ctx) {
	ctx->ticket_cats = NULL;
	ctx->n_ticket_cats = 0;
}

int main(int argc, char **argv) {
	if (argc <= 1) {
		mk_print_help();
		return 0;
	}

	// TODO: Parse arguments

	struct mk_context ctx;
	mk_context_init(&ctx);

	SetConfigFlags(FLAG_WINDOW_RESIZABLE);

	const int screenWidth  = 800;
	const int screenHeight = 450;
	InitWindow(screenWidth, screenHeight, "milk");

	SetTargetFPS(60);

	while (!WindowShouldClose())
	{
		// TODO: Handle input events

		BeginDrawing();
		mk_draw(&ctx);
		EndDrawing();
	}
	CloseWindow();

	return 0;
}
