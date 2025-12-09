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

	struct mk_ticket_cat *ticket_cats = NULL;
	size_t n_ticket_cats = 0;

	// TODO: Parse arguments
}
