#include "tracking.h"

int main(int argc, char **argv) {
	int ticket_counter[MK_TICKET_TYPE_COUNT];

	for (int i = 0; i < MK_TICKET_TYPE_COUNT; ++i) {
		ticket_counter[i] = 0;
	}

	mk_inc_counter(ticket_counter, MK_TICKET_TYPE_WATER_DAMAGE);
	mk_print_status(ticket_counter, MK_TICKET_TYPE_COUNT);
}
