#ifndef __STSZ_H__
#define __STSZ_H__

#include "private.h"

int quicktime_stsz_init(quicktime_stsz_t *stsz);
int quicktime_stsz_init_video(quicktime_t *file, quicktime_stsz_t *stsz);
int quicktime_stsz_init_audio(quicktime_t *file, quicktime_stsz_t *stsz, int sample_size);
int quicktime_stsz_init_common(quicktime_t *file, quicktime_stsz_t *stsz);
int quicktime_stsz_delete(quicktime_stsz_t *stsz);
int quicktime_stsz_dump(quicktime_stsz_t *stsz);
int quicktime_read_stsz(quicktime_t *file, quicktime_stsz_t *stsz);
int quicktime_write_stsz(quicktime_t *file, quicktime_stsz_t *stsz);
int quicktime_update_stsz(quicktime_stsz_t *stsz, long chunk, long offset);

#endif
