#ifndef __TREF_H__
#define __TREF_H__

#include "private.h"

int quicktime_tref_init(quicktime_tref_t *tref);
int quicktime_tref_init_hint(quicktime_tref_t *tref, quicktime_trak_t *refTrak);
int quicktime_tref_dump(quicktime_tref_t *tref);
int quicktime_read_tref(quicktime_t *file, quicktime_tref_t *tref, quicktime_atom_t *parent_atom);
int quicktime_write_tref(quicktime_t *file, quicktime_tref_t *tref);

#endif
