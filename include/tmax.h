#ifndef __TMAX_H__
#define __TMAX_H__

#include "private.h"

int quicktime_tmax_init(quicktime_tmax_t *tmax);
int quicktime_tmax_delete(quicktime_tmax_t *tmax);
int quicktime_tmax_dump(quicktime_tmax_t *tmax);
int quicktime_read_tmax(quicktime_t *file, quicktime_tmax_t *tmax);
int quicktime_write_tmax(quicktime_t *file, quicktime_tmax_t *tmax);

#endif
