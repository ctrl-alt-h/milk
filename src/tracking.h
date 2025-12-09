// tracking.h - Interface and data structures for handling ticket categories.
// Copyright (C) 2025, Jonathan Henning

#ifndef _TRACKING_H
#define _TRACKING_H

#include <stddef.h>

struct mk_ticket_cat {
	const char  *title;
	unsigned int count;
};

/* ----- MEMORY MANAGEMENT ----- */

/* Appends and inits dynamic struct mk_ticket_cat to p (array ptr). */
void mk_alloc_category(struct mk_ticket_cat **p, size_t *n, const char *title);

/* ----- STATE MANAGEMENT ----- */
void mk_inc_counter(struct mk_ticket_cat *cat_ptr);
void mk_dec_counter(struct mk_ticket_cat *cat_ptr);

/* ----- LOGGING ----- */
void mk_print_status(const struct mk_ticket_cat *arr, size_t n);

#endif
