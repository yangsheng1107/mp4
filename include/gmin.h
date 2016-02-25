#ifndef __GMIN_H__
#define __GMIN_H__

#include "private.h"

int quicktime_gmin_init(quicktime_gmin_t *gmin);
int quicktime_gmin_delete(quicktime_gmin_t *gmin);
int quicktime_gmin_dump(quicktime_gmin_t *gmin);
int quicktime_read_gmin(quicktime_t *file, quicktime_gmin_t *gmin);
int quicktime_write_gmin(quicktime_t *file, quicktime_gmin_t *gmin);

#endif
