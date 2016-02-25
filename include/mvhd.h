#ifndef __MVHD_H__
#define __MVHD_H__

#include "private.h"

int quicktime_mvhd_init(quicktime_mvhd_t *mvhd);
int quicktime_mvhd_delete(quicktime_mvhd_t *mvhd);
int quicktime_mvhd_dump(quicktime_mvhd_t *mvhd);
int quicktime_read_mvhd(quicktime_t *file, quicktime_mvhd_t *mvhd);
int quicktime_write_mvhd(quicktime_t *file, quicktime_mvhd_t *mvhd);

#endif
