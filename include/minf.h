#ifndef __MINF_H__
#define __MINF_H__

#include "private.h"

int quicktime_minf_init(quicktime_minf_t *minf);
int quicktime_minf_init_video(quicktime_t *file, quicktime_minf_t *minf, int frame_w, int frame_h, int time_scale, float frame_rate, char *compressor);
int quicktime_minf_init_audio(quicktime_t *file, quicktime_minf_t *minf, int channels, int sample_rate, int bits, int sample_size, int time_scale, int sample_duration, char *compressor);
int quicktime_minf_init_hint(quicktime_t *file, quicktime_minf_t *minf, quicktime_trak_t *refTrak, int maxPktSize, int timeScale, int sampleDuration);
int quicktime_minf_delete(quicktime_minf_t *minf);
int quicktime_minf_dump(quicktime_minf_t *minf);
int quicktime_read_minf(quicktime_t *file, quicktime_minf_t *minf, quicktime_atom_t *parent_atom);
int quicktime_write_minf(quicktime_t *file, quicktime_minf_t *minf);

#endif
