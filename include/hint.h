#ifndef __HINT_H__
#define __HINT_H__

#include "private.h"

int quicktime_hint_init(quicktime_hint_t *hint);
int quicktime_hint_set(quicktime_hint_t *hint, quicktime_trak_t *refTrak);
int quicktime_hint_delete(quicktime_hint_t *hint);
int quicktime_read_hint(quicktime_t *file, quicktime_hint_t *hint, quicktime_atom_t *parent_atom);
int quicktime_write_hint(quicktime_t *file, quicktime_hint_t *hint);
int quicktime_hint_dump(quicktime_hint_t *hint);

#endif
