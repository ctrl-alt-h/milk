// tracking.c - Implementation for ticket category handling.
// Copyright (C) 2025, Jonathan Henning

#include "tracking.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mk_alloc_category(struct mk_ticket_cat **arr_ptr, size_t *n, const char *title) {
	(*n)++;

	struct mk_ticket_cat *new_arr = realloc(*arr_ptr, *n * sizeof(struct mk_ticket_cat));
	if (new_arr == NULL) {
		fprintf(stderr, "Error: couldn't allocate memory\n");
		return;
	}

	new_arr[*n - 1].title = title;
	new_arr[*n - 1].count = 0;

	*arr_ptr = new_arr;
}

void mk_free_category(struct mk_ticket_cat **arr_ptr, size_t *n, int idx) {
	if (idx < 0 || (size_t)idx >= *n || *arr_ptr == NULL) {
		return;
	}

	size_t n_moves = *n - idx - 1;
	if (n_moves > 0) {
		memmove(
			&(*arr_ptr)[idx],
			&(*arr_ptr)[idx + 1],
			n_moves * sizeof(struct mk_ticket_cat)
		);
	}

	(*n)--;

	if (*n == 0) {
		free(*arr_ptr);
		*arr_ptr = NULL;
	} else {
		struct mk_ticket_cat *new_arr = realloc(*arr_ptr, *n * sizeof(struct mk_ticket_cat));
		if (new_arr == NULL) {
			fprintf(stderr, "Error: couldn't allocate memory\n");
			return;
		}
		
		*arr_ptr = new_arr;
	}
}

void mk_inc_counter(struct mk_ticket_cat *cat_ptr) {
	cat_ptr->count++;
}

void mk_dec_counter(struct mk_ticket_cat *cat_ptr) {
	cat_ptr->count--;
}

void mk_print_status(const struct mk_ticket_cat *arr_ptr, size_t n) {
	printf("Number of each recorded ticket\n");
	for (size_t i = 0; i < n; ++i) {
		printf("%s:\t", arr_ptr[i].title);
		printf("%u\n", arr_ptr[i].count);
	}
}
