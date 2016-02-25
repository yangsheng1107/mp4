#ifndef __HMHD_H__
#define __HMHD_H__

#include "private.h"

int quicktime_hmhd_init(quicktime_hmhd_t *hmhd);
int quicktime_hmhd_delete(quicktime_hmhd_t *hmhd);
int quicktime_hmhd_dump(quicktime_hmhd_t *hmhd);
int quicktime_read_hmhd(quicktime_t *file, quicktime_hmhd_t *hmhd);
int quicktime_write_hmhd(quicktime_t *file, quicktime_hmhd_t *hmhd);

#endif
