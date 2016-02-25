#ifndef __HINTUDTA_H__
#define __HINTUDTA_H__

#include "private.h"

int quicktime_hint_udta_init(quicktime_hint_udta_t *hint_udta);
int quicktime_hint_udta_delete(quicktime_hint_udta_t *hint_udta);
int quicktime_hint_udta_dump(quicktime_hint_udta_t *hint_udta);
int quicktime_read_hint_udta(quicktime_t *file, quicktime_hint_udta_t *hint_udta, quicktime_atom_t *parent_atom);
int quicktime_write_hint_udta(quicktime_t *file, quicktime_hint_udta_t *hint_udta);

#endif
