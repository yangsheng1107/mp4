#ifndef __DMED_H__
#define __DMED_H__

#include "private.h"

int quicktime_dmed_init(quicktime_dmed_t *dmed);
int quicktime_dmed_delete(quicktime_dmed_t *dmed);
int quicktime_dmed_dump(quicktime_dmed_t *dmed);
int quicktime_read_dmed(quicktime_t *file, quicktime_dmed_t *dmed);
int quicktime_write_dmed(quicktime_t *file, quicktime_dmed_t *dmed);

#endif
