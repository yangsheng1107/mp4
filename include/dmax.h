#ifndef __DMAX_H__
#define __DMAX_H__

#include "private.h"

int quicktime_dmax_init(quicktime_dmax_t *dmax);
int quicktime_dmax_delete(quicktime_dmax_t *dmax);
int quicktime_dmax_dump(quicktime_dmax_t *dmax);
int quicktime_read_dmax(quicktime_t *file, quicktime_dmax_t *dmax);
int quicktime_write_dmax(quicktime_t *file, quicktime_dmax_t *dmax);

#endif
