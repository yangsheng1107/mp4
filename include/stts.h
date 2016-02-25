#ifndef __STTS_H__
#define __STTS_H__

#include "private.h"

int quicktime_stts_init(quicktime_stts_t *stts);
int quicktime_stts_init_table(quicktime_stts_t *stts);
int quicktime_stts_init_video(quicktime_t *file, quicktime_stts_t *stts, int time_scale, float frame_rate);
int quicktime_stts_init_audio(quicktime_t *file, quicktime_stts_t *stts, int time_scale, int sample_duration);
int quicktime_stts_init_hint(quicktime_t *file, quicktime_stts_t *stts, int sample_duration);
int quicktime_stts_delete(quicktime_stts_t *stts);
int quicktime_stts_dump(quicktime_stts_t *stts);
int quicktime_read_stts(quicktime_t *file, quicktime_stts_t *stts);
int quicktime_write_stts(quicktime_t *file, quicktime_stts_t *stts);
int quicktime_update_stts(quicktime_stts_t *stts, long sample_duration);

#endif
