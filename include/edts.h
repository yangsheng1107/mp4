#ifndef __EDTS_H__
#define __EDTS_H__

#include "private.h"

int quicktime_edts_init_table(quicktime_edts_t *edts);
int quicktime_edts_init(quicktime_edts_t *edts);
int quicktime_edts_delete(quicktime_edts_t *edts);
int quicktime_read_edts(quicktime_t *file, quicktime_edts_t *edts, quicktime_atom_t *edts_atom);
int quicktime_edts_dump(quicktime_edts_t *edts);
int quicktime_write_edts(quicktime_t *file, quicktime_edts_t *edts, long duration);

#endif
