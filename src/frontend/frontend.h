// frontend.h - Interface for drawing ui.
// Copyright (C) 2025, Jonathan Henning

#ifndef _FRONTEND_H
#define _FRONTEND_H

#include "../tracking.h"
#include "controller.h"

struct mk_frontend {
	struct mk_ticket_cat *ticket_cats;
	size_t n_ticket_cats;
	const struct mk_controller_callbacks *callbacks;
};

void mk_frontend_init(struct mk_frontend *f, const struct mk_controller_callbacks *cbs);
void mk_draw_loop(const struct mk_frontend *f);

#endif
