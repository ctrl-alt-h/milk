#include "tracking.h"
#include <stdio.h>
#include <stdlib.h>

void mk_alloc_category(struct mk_ticket_cat **p, size_t *n, const char *title) {
	(*n)++;

	struct mk_ticket_cat *new_arr = realloc(*p, *n * sizeof(struct mk_ticket_cat));
	if (new_arr == NULL) {
		fprintf(stderr, "Error: couldn't allocate memory\n");
		return;
	}

	new_arr[*n - 1].title = title;
	new_arr[*n - 1].count = 0;

	*p = new_arr;
}

void mk_inc_counter(struct mk_ticket_cat *cat) {
	cat->count++;
}

void mk_dec_counter(struct mk_ticket_cat *cat) {
	cat->count--;
}

void mk_print_status(const struct mk_ticket_cat *arr, size_t n) {
	printf("Number of each recorded ticket\n");
	for (size_t i = 0; i < n; ++i) {
		printf("%s:\t", arr[i].title);
		printf("%d\n", arr[i].count);
	}
}
