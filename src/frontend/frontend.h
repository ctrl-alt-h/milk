#ifndef _FRONTEND_H
#define _FRONTEND_H

#include "../tracking.h"

struct mk_frontend {
	struct mk_ticket_cat *ticket_cats;
	size_t n_ticket_cats;
};

void mk_frontend_init(struct mk_frontend *f);
void mk_draw_loop(const struct mk_frontend *f);

#endif
