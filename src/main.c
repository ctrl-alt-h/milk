#include <stdio.h>

enum MK_TICKET_TYPE {
	MK_TICKET_TYPE_WATER_DAMAGE,
	MK_TICKET_TYPE_SOLIDWORKS,
	MK_TICKET_TYPE_BROKEN_SCREEN,
	MK_TICKET_TYPE_COUNT
};

static char *MK_TICKET_STRINGS[MK_TICKET_TYPE_COUNT] = {
	"Water Damage",
	"SolidWorks",
	"Broken Screen"
};

void mk_inc_counter(int *ticket_counter, const int ticket_type) {
	ticket_counter[ticket_type]++;
}

void mk_print_status(const int *ticket_counter, const int size) {
	printf("Number of each recorded ticket\n");
	for (int i = 0; i < size; ++i) {
		printf("%s:\t", MK_TICKET_STRINGS[i]);
		printf("%d\n", ticket_counter[i]);
	}
}

int main(int argc, char **argv) {
	int ticket_counter[MK_TICKET_TYPE_COUNT];

	for (int i = 0; i < MK_TICKET_TYPE_COUNT; ++i) {
		ticket_counter[i] = 0;
	}

	mk_inc_counter(ticket_counter, MK_TICKET_TYPE_WATER_DAMAGE);
	mk_print_status(ticket_counter, MK_TICKET_TYPE_COUNT);
}
