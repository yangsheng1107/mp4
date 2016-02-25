#ifndef __MOOV_H__
#define __MOOV_H__

#include "private.h"

int quicktime_moov_init(quicktime_moov_t *moov);
int quicktime_moov_delete(quicktime_moov_t *moov);
int quicktime_moov_dump(quicktime_moov_t *moov);
int quicktime_read_moov(quicktime_t *file, quicktime_moov_t *moov, quicktime_atom_t *parent_atom);
int quicktime_write_moov(quicktime_t *file, quicktime_moov_t *moov);

#endif
