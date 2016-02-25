#ifndef __CTTS_H__
#define __CTTS_H__

#include "private.h"

int quicktime_ctts_init(quicktime_ctts_t *ctts);
int quicktime_ctts_init_common(quicktime_t *file, quicktime_ctts_t *ctts);
int quicktime_ctts_delete(quicktime_ctts_t *ctts);
int quicktime_ctts_dump(quicktime_ctts_t *ctts);
int quicktime_read_ctts(quicktime_t *file, quicktime_ctts_t *ctts);
int quicktime_write_ctts(quicktime_t *file, quicktime_ctts_t *ctts);
int quicktime_update_ctts(quicktime_ctts_t *ctts, long sample_offset);

#endif
