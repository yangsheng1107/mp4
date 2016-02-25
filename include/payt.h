#ifndef __PAYT_H__
#define __PAYT_H__

#include "private.h"

int quicktime_payt_init(quicktime_payt_t *payt);
int quicktime_payt_delete(quicktime_payt_t *payt);
int quicktime_payt_dump(quicktime_payt_t *payt);
int quicktime_read_payt(quicktime_t *file, quicktime_payt_t *payt);
int quicktime_write_payt(quicktime_t *file, quicktime_payt_t *payt);

#endif
