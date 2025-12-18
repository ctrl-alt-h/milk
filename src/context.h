#ifndef _CONTEXT_H
#define _CONTEXT_H

#include "stddef.h"

struct mk_ticket_cat {
	const char  *title;
	unsigned int count;
};

struct mk_context {
	struct mk_ticket_cat *ticket_cats;
	size_t n_ticket_cats;
};

#endif
