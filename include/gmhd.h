#ifndef __GMHD_H__
#define __GMHD_H__

#include "private.h"

int quicktime_gmhd_init(quicktime_gmhd_t *gmhd);
int quicktime_gmhd_delete(quicktime_gmhd_t *gmhd);
int quicktime_gmhd_dump(quicktime_gmhd_t *gmhd);
int quicktime_read_gmhd(quicktime_t *file, quicktime_gmhd_t *gmhd, quicktime_atom_t *parent_atom);
int quicktime_write_gmhd(quicktime_t *file, quicktime_gmhd_t *gmhd);

#endif
