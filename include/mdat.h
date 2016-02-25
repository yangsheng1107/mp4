#ifndef __MDAT_H__
#define __MDAT_H__

#include "private.h"

int quicktime_mdat_init(quicktime_mdat_t *mdat);
int quicktime_mdat_delete(quicktime_mdat_t *mdat);
int quicktime_read_mdat(quicktime_t *file, quicktime_mdat_t *mdat, quicktime_atom_t *parent_atom);
int quicktime_write_mdat(quicktime_t *file, quicktime_mdat_t *mdat);

#endif
