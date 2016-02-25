#ifndef __STBL_H__
#define __STBL_H__

#include "private.h"

int quicktime_stbl_init(quicktime_stbl_t *tkhd);
int quicktime_stbl_init_video(quicktime_t *file, quicktime_stbl_t *stbl, int frame_w, int frame_h, int time_scale, float frame_rate, char *compressor);
int quicktime_stbl_init_audio(quicktime_t *file, quicktime_stbl_t *stbl, int channels, int sample_rate, int bits, int sample_size, int time_scale, int sample_duration, char *compressor);
int quicktime_stbl_init_hint(quicktime_t *file, quicktime_stbl_t *stbl, quicktime_trak_t *refTrak, int maxPktSize, int timeScale, int sampleDuration);
int quicktime_stbl_delete(quicktime_stbl_t *stbl);
int quicktime_stbl_dump(void *minf_ptr, quicktime_stbl_t *stbl);
int quicktime_read_stbl(quicktime_t *file, quicktime_minf_t *minf, quicktime_stbl_t *stbl, quicktime_atom_t *parent_atom);
int quicktime_write_stbl(quicktime_t *file, quicktime_minf_t *minf, quicktime_stbl_t *stbl);

#endif
