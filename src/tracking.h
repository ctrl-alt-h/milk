#ifndef _TRACKING_H
#define _TRACKING_H

#include <stddef.h>

struct mk_ticket_cat {
	const char  *title;
	unsigned int count;
};

void mk_alloc_category(struct mk_ticket_cat **arr_ptr, size_t *n, const char *title);
void mk_inc_counter(struct mk_ticket_cat *cat);
void mk_dec_counter(struct mk_ticket_cat *cat);
void mk_print_status(const struct mk_ticket_cat *arr, size_t n);

#endif
