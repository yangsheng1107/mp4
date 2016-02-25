#ifndef __HINTHNTI_H__
#define __HINTHNTI_H__

#include "private.h"

int quicktime_hint_hnti_init(quicktime_hint_hnti_t *hnti);
int quicktime_hint_hnti_delete(quicktime_hint_hnti_t *hnti);
int quicktime_hint_hnti_dump(quicktime_hint_hnti_t *hnti);
int quicktime_write_hint_hnti(quicktime_t *file, quicktime_hint_hnti_t *hnti);
int quicktime_read_hint_hnti(quicktime_t *file, quicktime_hint_hnti_t *hnti, quicktime_atom_t *parent_atom);


#endif
