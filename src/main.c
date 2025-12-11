#include "tracking.h"
#include <stdio.h>
#include <raylib.h>

void mk_print_help(void) {
	printf("Usage: milk <options>\n");
}

int main(int argc, char **argv) {
	if (argc <= 1) {
		mk_print_help();
		return 0;
	}

	struct mk_ticket_cat *ticket_cats = NULL;
	size_t n_ticket_cats = 0;

	const int screenWidth = 800;
	const int screenHeight = 450;

	InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

	SetTargetFPS(60);

	while (!WindowShouldClose())    // Detect window close button or ESC key
	{
		// Update
		//----------------------------------------------------------------------------------
		// TODO: Update your variables here
		//----------------------------------------------------------------------------------

		// Draw
		//----------------------------------------------------------------------------------
		BeginDrawing();

		ClearBackground(RAYWHITE);

		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

		EndDrawing();
		//----------------------------------------------------------------------------------
	}

	// De-Initialization
	//--------------------------------------------------------------------------------------
	CloseWindow();        // Close window and OpenGL context
			      //--------------------------------------------------------------------------------------

	return 0;
}
