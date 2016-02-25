#ifndef __STSD_H__
#define __STSD_H__

#include "private.h"

int quicktime_stsd_init(quicktime_stsd_t *stsd);
int quicktime_stsd_init_video(quicktime_t *file, quicktime_stsd_t *stsd, int frame_w, int frame_h, float frame_rate, char *compression);
int quicktime_stsd_init_audio(quicktime_t *file, quicktime_stsd_t *stsd, int channels, int sample_rate, int bits, char *compressor);
int quicktime_stsd_init_table(quicktime_stsd_t *stsd);
int quicktime_stsd_init_hint(quicktime_t *file, 
                             quicktime_stsd_t *stsd, 
                             int maxPktSize,
                             int timeScale);
int quicktime_stsd_delete(quicktime_stsd_t *stsd);
int quicktime_stsd_dump(void *minf_ptr, quicktime_stsd_t *stsd);
int quicktime_read_stsd(quicktime_t *file, quicktime_minf_t *minf, quicktime_stsd_t *stsd);
int quicktime_write_stsd(quicktime_t *file, quicktime_minf_t *minf, quicktime_stsd_t *stsd);

#endif
