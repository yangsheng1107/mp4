#ifndef __MDIA_H__
#define __MDIA_H__

#include "private.h"

int quicktime_mdia_init(quicktime_mdia_t *mdia);
int quicktime_mdia_init_video(quicktime_t *file, quicktime_mdia_t *mdia, int frame_w, int frame_h, float frame_rate, int time_scale, char *compressor);
int quicktime_mdia_init_audio(quicktime_t *file, quicktime_mdia_t *mdia, int channels, int sample_rate, int bits, int sample_size, int time_scale, int sample_duration, char *compressor);
int quicktime_mdia_init_hint(quicktime_t *file, quicktime_mdia_t *mdia, quicktime_trak_t *refTrak, int maxPktSize, int time_scale, int sampleDuration);
int quicktime_mdia_delete(quicktime_mdia_t *mdia);
int quicktime_mdia_dump(quicktime_mdia_t *mdia);
int quicktime_read_mdia(quicktime_t *file, quicktime_mdia_t *mdia, quicktime_atom_t *trak_atom);
int quicktime_write_mdia(quicktime_t *file, quicktime_mdia_t *mdia);

#endif
