#ifndef __STCO_H__
#define __STCO_H__

#include "private.h"

int quicktime_stco_init(quicktime_stco_t *stco);
int quicktime_stco_init_common(quicktime_t *file, quicktime_stco_t *stco);
int quicktime_stco_delete(quicktime_stco_t *stco);
int quicktime_stco_dump(quicktime_stco_t *stco);
int quicktime_read_stco(quicktime_t *file, quicktime_stco_t *stco);
int quicktime_write_stco(quicktime_t *file, quicktime_stco_t *stco);
int quicktime_update_stco(quicktime_stco_t *stco, long chunk, long offset);

#endif
