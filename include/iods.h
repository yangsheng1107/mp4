#ifndef __IODS_H__
#define __IODS_H__

#include "private.h"

int quicktime_iods_init(quicktime_iods_t *iods);
int quicktime_iods_set_audio_profile(quicktime_iods_t* iods, int id);
int quicktime_iods_set_video_profile(quicktime_iods_t* iods, int id);
int quicktime_iods_delete(quicktime_iods_t *iods);
int quicktime_iods_dump(quicktime_iods_t *iods);
int quicktime_read_iods(quicktime_t *file, quicktime_iods_t *iods);
int quicktime_write_iods(quicktime_t *file, quicktime_iods_t *iods);

#endif
