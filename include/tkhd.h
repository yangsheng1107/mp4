#ifndef __TKHD_H__
#define __TKHD_H__

#include "private.h"

int quicktime_tkhd_init(quicktime_tkhd_t *tkhd);
int quicktime_tkhd_init_video(quicktime_t *file, quicktime_tkhd_t *tkhd, int frame_w, int frame_h);
int quicktime_tkhd_init_audio(quicktime_t *file, quicktime_tkhd_t *tkhd);
int quicktime_tkhd_init_hint(quicktime_t *file, quicktime_tkhd_t *tkhd); 
int quicktime_tkhd_delete(quicktime_tkhd_t *tkhd);
int quicktime_tkhd_dump(quicktime_tkhd_t *tkhd);
int quicktime_read_tkhd(quicktime_t *file, quicktime_tkhd_t *tkhd);
int quicktime_write_tkhd(quicktime_t *file, quicktime_tkhd_t *tkhd);

#endif
