#include "tracking.h"
#include <stdio.h>

char *MK_TICKET_STRINGS[MK_TICKET_TYPE_COUNT] = {
	"Water Damage",
	"SolidWorks",
	"Broken Screen",
};

void mk_inc_counter(int *ticket_counter, const int ticket_type) {
	ticket_counter[ticket_type]++;
}

void mk_dec_counter(int *ticket_counter, int ticket_type) {
	ticket_counter[ticket_type]--;
}

void mk_print_status(const int *ticket_counter, const int size) {
	printf("Number of each recorded ticket\n");
	for (int i = 0; i < size; ++i) {
		printf("%s:\t", MK_TICKET_STRINGS[i]);
		printf("%d\n", ticket_counter[i]);
	}
}
