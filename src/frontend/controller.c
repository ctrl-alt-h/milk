#include "controller.h"
#include <stdio.h>

void mk_controller_init(struct mk_controller_callbacks *cbs) {
	cbs->add_ticket = mk_controller_add_ticket;
}

void mk_controller_add_ticket(const char *title) {
	/* TODO: replace test impl */
	printf("%s\n", title);
}
