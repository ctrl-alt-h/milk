#include "tracking.h"
#include <stdio.h>

void mk_print_help(void) {
	printf("Usage: milk <options>\n");
}

int main(int argc, char **argv) {
	if (argc <= 1) {
		mk_print_help();
		return 0;
	}

	int ticket_counter[MK_TICKET_TYPE_COUNT];
	for (int i = 0; i < MK_TICKET_TYPE_COUNT; ++i) {
		ticket_counter[i] = 0;
	}

	// TODO: Parse arguments
}
