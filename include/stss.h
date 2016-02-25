#ifndef __STSS_H__
#define __STSS_H__

#include "private.h"

int quicktime_stss_init(quicktime_stss_t *stss);
int quicktime_stss_init_common(quicktime_t *file, quicktime_stss_t *stss);
int quicktime_stss_delete(quicktime_stss_t *stss);
int quicktime_stss_dump(quicktime_stss_t *stss);
int quicktime_read_stss(quicktime_t *file, quicktime_stss_t *stss);
int quicktime_write_stss(quicktime_t *file, quicktime_stss_t *stss);
int quicktime_update_stss(quicktime_stss_t *stss, long sample_offset);

#endif
