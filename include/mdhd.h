#ifndef __MDHD_H__
#define __MDHD_H__

#include "private.h"

int quicktime_mdhd_init(quicktime_mdhd_t *mdhd);
int quicktime_mdhd_init_video(quicktime_t *file, quicktime_mdhd_t *mdhd, int time_scale);
int quicktime_mdhd_init_audio(quicktime_t *file, quicktime_mdhd_t *mdhd, int time_scale);
int quicktime_mdhd_init_hint(quicktime_t *file, 
                             quicktime_mdhd_t *mdhd, 
                             quicktime_trak_t *refTrak,
                             int time_scale);
int quicktime_mdhd_delete(quicktime_mdhd_t *mdhd);
int quicktime_read_mdhd(quicktime_t *file, quicktime_mdhd_t *mdhd);
int quicktime_mdhd_dump(quicktime_mdhd_t *mdhd);
int quicktime_write_mdhd(quicktime_t *file, quicktime_mdhd_t *mdhd);

#endif
