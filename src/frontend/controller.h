// controller.h - API controller for the frontend.
// Copyright (C) 2025, Jonathan Henning

#ifndef _CONTROLLER_H
#define _CONTROLLER_H

/* callback function types */
typedef void (*mk_add_ticket_callback)(const char *title);

struct mk_controller_callbacks {
	mk_add_ticket_callback add_ticket;
};

void mk_controller_init(struct mk_controller_callbacks *cbs);

/* function definitions */
void mk_controller_add_ticket(const char *title);

#endif
