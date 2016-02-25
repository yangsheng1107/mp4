#ifndef __TPYL_H__
#define __TPYL_H__

#include "private.h"

int quicktime_tpyl_init(quicktime_tpyl_t *tpyl);
int quicktime_tpyl_delete(quicktime_tpyl_t *tpyl);
int quicktime_tpyl_dump(quicktime_tpyl_t *tpyl);
int quicktime_read_tpyl(quicktime_t *file, quicktime_tpyl_t *tpyl);
int quicktime_write_tpyl(quicktime_t *file, quicktime_tpyl_t *tpyl);

#endif
