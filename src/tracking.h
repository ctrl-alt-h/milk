#ifndef _TRACKING_H
#define _TRACKING_H

enum MK_TICKET_TYPE {
	MK_TICKET_TYPE_WATER_DAMAGE,
	MK_TICKET_TYPE_SOLIDWORKS,
	MK_TICKET_TYPE_BROKEN_SCREEN,
	MK_TICKET_TYPE_COUNT
};

void mk_inc_counter(int *ticket_counter, int ticket_type);
void mk_dec_counter(int *ticket_counter, int ticket_type);
void mk_print_status(const int *ticket_counter, const int size);

#endif
