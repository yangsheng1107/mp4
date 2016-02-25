#ifndef __NUMP_H__
#define __NUMP_H__

#include "private.h"

int quicktime_nump_init(quicktime_nump_t *nump);
int quicktime_nump_delete(quicktime_nump_t *nump);
int quicktime_nump_dump(quicktime_nump_t *nump);
int quicktime_read_nump(quicktime_t *file, quicktime_nump_t *nump);
int quicktime_write_nump(quicktime_t *file, quicktime_nump_t *nump);

#endif
