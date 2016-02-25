#ifndef __CTAB_H__
#define __CTAB_H__

#include "private.h"

int quicktime_ctab_init(quicktime_ctab_t *ctab);
int quicktime_ctab_delete(quicktime_ctab_t *ctab);
int quicktime_ctab_dump(quicktime_ctab_t *ctab);
int quicktime_read_ctab(quicktime_t *file, quicktime_ctab_t *ctab);

#endif
