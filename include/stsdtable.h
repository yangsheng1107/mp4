#ifndef __STSDTABLE_H__
#define __STSDTABLE_H__

#include "private.h"

int quicktime_stsd_table_init(quicktime_stsd_table_t *table);
int quicktime_stsd_table_delete(quicktime_stsd_table_t *table);
int quicktime_stsd_table_dump(void *minf_ptr, quicktime_stsd_table_t *table);
int quicktime_read_stsd_table(quicktime_t *file, quicktime_minf_t *minf, quicktime_stsd_table_t *table);
int quicktime_write_stsd_table(quicktime_t *file, quicktime_minf_t *minf, quicktime_stsd_table_t *table);
int quicktime_read_stsd_audio(quicktime_t *file, quicktime_stsd_table_t *table, quicktime_atom_t *parent_atom);
int quicktime_write_stsd_audio(quicktime_t *file, quicktime_stsd_table_t *table);
int quicktime_stsd_audio_dump(quicktime_stsd_table_t *table);
int quicktime_read_stsd_video(quicktime_t *file, quicktime_stsd_table_t *table, quicktime_atom_t *parent_atom);
int quicktime_write_stsd_video(quicktime_t *file, quicktime_stsd_table_t *table);
int quicktime_stsd_video_dump(quicktime_stsd_table_t *table);
int quicktime_stsd_hint_dump(quicktime_stsd_table_t *table);
int quicktime_mjqt_init(quicktime_mjqt_t *mjqt);
int quicktime_mjht_init(quicktime_mjht_t *mjht);
int quicktime_mjqt_dump(quicktime_mjqt_t *mjqt);
int quicktime_mjht_init(quicktime_mjht_t *mjht);
int quicktime_mjht_delete(quicktime_mjht_t *mjht);
int quicktime_mjqt_delete(quicktime_mjqt_t *mjqt);
int quicktime_mjht_dump(quicktime_mjht_t *mjht);
int quicktime_read_stsd_hint(quicktime_t *file, quicktime_stsd_table_t *table, quicktime_atom_t *parent_atom);
int quicktime_write_stsd_hint(quicktime_t *file, quicktime_stsd_table_t *table);
int quicktime_tims_init(quicktime_tims_t *tims);
int quicktime_read_tims(quicktime_t *file, quicktime_tims_t *tims);
int quicktime_write_tims(quicktime_t *file, quicktime_tims_t *tims);


#endif
