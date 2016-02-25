#ifndef FUNCPROTOS_H
#define FUNCPROTOS_H

#include "private.h"


/* atom handling routines */
int quicktime_atom_read_header(quicktime_t *file, quicktime_atom_t *atom);
int quicktime_atom_write_header(quicktime_t *file, quicktime_atom_t *atom, char *text);
int quicktime_atom_write_footer(quicktime_t *file, quicktime_atom_t *atom);
int quicktime_atom_is(quicktime_atom_t *atom, char *type);
long quicktime_atom_read_size(char *data);
u_int64_t quicktime_atom_read_size64(char *data);
int quicktime_atom_skip(quicktime_t *file, quicktime_atom_t *atom);

quicktime_trak_t* quicktime_add_track(quicktime_moov_t *moov);
quicktime_trak_t* quicktime_find_track_by_id(quicktime_moov_t *moov, int trackId);

/* initializers for every atom */
int quicktime_dinf_init_all(quicktime_dinf_t *dinf);
int quicktime_dinf_init(quicktime_dinf_t *dinf);
int quicktime_trak_init(quicktime_trak_t *trak);
int quicktime_trak_init_video(quicktime_t *file, quicktime_trak_t *trak, int frame_w, int frame_h, float frame_rate, int time_scale, char *compressor);
int quicktime_trak_init_audio(quicktime_t *file, quicktime_trak_t *trak, int channels, int sample_rate, int bits, int sample_size, int time_scale, int sample_duration, char *compressor);
int quicktime_trak_init_hint(quicktime_t *file, quicktime_trak_t *trak, quicktime_trak_t *refTrak, int maxPktSize, int time_scale, int sample_duration);
int quicktime_write_trak(quicktime_t *file, quicktime_trak_t *trak, long moov_time_scale);
long quicktime_track_end(quicktime_trak_t *trak);


int quicktime_init(quicktime_t *file);

/* utilities for reading data types */
int quicktime_read_data(quicktime_t *file, char *data, int size);
int quicktime_write_data(quicktime_t *file, char *data, int size);
int quicktime_read_pascal(quicktime_t *file, char *data);
int quicktime_write_pascal(quicktime_t *file, char *data);
float quicktime_read_fixed32(quicktime_t *file);
int quicktime_write_fixed32(quicktime_t *file, float number);
float quicktime_read_fixed16(quicktime_t *file);
int quicktime_write_fixed16(quicktime_t *file, float number);
u_int64_t quicktime_read_int64(quicktime_t *file);
int quicktime_write_int64(quicktime_t *file, u_int64_t number);
long quicktime_read_int32(quicktime_t *file);
int quicktime_write_int32(quicktime_t *file, long number);
long quicktime_read_int24(quicktime_t *file);
int quicktime_write_int24(quicktime_t *file, long number);
int quicktime_read_int16(quicktime_t *file);
int quicktime_write_int16(quicktime_t *file, int number);
int quicktime_read_char(quicktime_t *file);
int quicktime_write_char(quicktime_t *file, char x);
int quicktime_read_char32(quicktime_t *file, char *string);
int quicktime_write_char32(quicktime_t *file, char *string);
int quicktime_copy_char32(char *output, char *input);
int quicktime_print_chars(char *desc, char *input, int len);
long quicktime_position(quicktime_t *file);
int quicktime_set_position(quicktime_t *file, long position) ;
int quicktime_read_mp4_descr_length(quicktime_t *file);
int quicktime_write_mp4_descr_length(quicktime_t *file, int length, BOOL compact);

/* Most codecs don't specify the actual number of bits on disk in the stbl. */
/* Convert the samples to the number of bytes for reading depending on the codec. */
long quicktime_samples_to_bytes(quicktime_trak_t *track, long samples);


/* chunks always start on 1 */
/* samples start on 0 */

/* queries for every atom */
/* the starting sample in the given chunk */
long quicktime_sample_of_chunk(quicktime_trak_t *trak, long chunk);

/* number of samples in the chunk */
long quicktime_chunk_samples(quicktime_trak_t *trak, long chunk);
int quicktime_chunk_of_sample(long *chunk_sample, long *chunk, quicktime_trak_t *trak, long sample);

/* the byte offset from mdat start of the chunk */
long quicktime_chunk_to_offset(quicktime_trak_t *trak, long chunk);

/* the chunk of any offset from mdat start */
long quicktime_offset_to_chunk(long *chunk_offset, quicktime_trak_t *trak, long offset);

/* the total number of samples in the track depending on the access mode */
long quicktime_track_samples(quicktime_t *file, quicktime_trak_t *trak);

/* total bytes between the two samples */
long quicktime_sample_range_size(quicktime_trak_t *trak, long chunk_sample, long sample);

/* update the position pointers in all the tracks after a set_position */
int quicktime_update_positions(quicktime_t *file);

/* converting between mdat offsets to samples */
long quicktime_sample_to_offset(quicktime_trak_t *trak, long sample);
long quicktime_offset_to_sample(quicktime_trak_t *trak, long offset);

quicktime_trak_t* quicktime_add_trak(quicktime_moov_t *moov);
int quicktime_delete_trak(quicktime_moov_t *moov, quicktime_trak_t *trak);
int quicktime_read_trak(quicktime_t *file, quicktime_trak_t *trak, quicktime_atom_t *trak_atom);
int quicktime_trak_dump(quicktime_trak_t *trak);
int quicktime_trak_duration(quicktime_trak_t *trak, long *duration, long *timescale);
int quicktime_trak_fix_counts(quicktime_t *file, quicktime_trak_t *trak);
int quicktime_trak_shift_offsets(quicktime_trak_t *trak, long offset);

int quicktime_get_timescale(float frame_rate);

/* update all the tables after writing a buffer */
/* set sample_size to 0 if no sample size should be set */
int quicktime_update_tables(quicktime_t *file, 
                            quicktime_trak_t *trak, 
                            long offset, 
                            long chunk, 
                            long sample, 
                            long samples, 
                            long sample_size,
                            long sample_duration,
                            u_char isSyncSample,
                            long renderingOffset);
unsigned long quicktime_current_time();

/* Returns 1 if equal or 0 if different */
int quicktime_match_32(char *input, char *output);
#endif
