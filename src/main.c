#include "frontend/frontend.h"
#include "frontend/controller.h"
#include <stdio.h>

void mk_print_help(void) {
	printf("Usage: milk <options>\n");
}

int main(int argc, char **argv) {
	if (argc <= 1) {
		mk_print_help();
		return 0;
	}

	struct mk_controller_callbacks 	callbacks;
	mk_controller_init(&callbacks);

	struct mk_frontend frontend;
	mk_frontend_init(&frontend, &callbacks);

	mk_draw_loop(&frontend);

	return 0;
}
