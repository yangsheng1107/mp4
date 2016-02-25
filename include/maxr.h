#ifndef __MAXR_H__
#define __MAXR_H__

#include "private.h"

int quicktime_maxr_init(quicktime_maxr_t *maxr);
int quicktime_maxr_delete(quicktime_maxr_t *maxr);
int quicktime_maxr_dump(quicktime_maxr_t *maxr);
int quicktime_read_maxr(quicktime_t *file, quicktime_maxr_t *maxr);
int quicktime_write_maxr(quicktime_t *file, quicktime_maxr_t *maxr);

#endif
