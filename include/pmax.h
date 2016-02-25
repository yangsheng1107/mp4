#ifndef __PMAX_H__
#define __PMAX_H__

#include "private.h"

int quicktime_pmax_init(quicktime_pmax_t *pmax);
int quicktime_pmax_delete(quicktime_pmax_t *pmax);
int quicktime_pmax_dump(quicktime_pmax_t *pmax);
int quicktime_read_pmax(quicktime_t *file, quicktime_pmax_t *pmax);
int quicktime_write_pmax(quicktime_t *file, quicktime_pmax_t *pmax);

#endif
