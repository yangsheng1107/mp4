#ifndef __TMIN_H__
#define __TMIN_H__

#include "private.h"

int quicktime_tmin_init(quicktime_tmin_t *tmin);
int quicktime_tmin_delete(quicktime_tmin_t *tmin);
int quicktime_tmin_dump(quicktime_tmin_t *tmin);
int quicktime_read_tmin(quicktime_t *file, quicktime_tmin_t *tmin);
int quicktime_write_tmin(quicktime_t *file, quicktime_tmin_t *tmin);

#endif
