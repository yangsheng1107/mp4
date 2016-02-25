#ifndef __HNTI_H__
#define __HNTI_H__

#include "private.h"

int quicktime_hnti_init(quicktime_hnti_t *hnti);
int quicktime_hnti_delete(quicktime_hnti_t *hnti);
int quicktime_hnti_dump(quicktime_hnti_t *hnti);
int quicktime_read_hnti(quicktime_t *file, quicktime_hnti_t *hnti, quicktime_atom_t *parent_atom);
int quicktime_write_hnti(quicktime_t *file, quicktime_hnti_t *hnti);

#endif
