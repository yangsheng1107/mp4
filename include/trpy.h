#ifndef __TRPY_H__
#define __TRPY_H__

#include "private.h"

int quicktime_trpy_init(quicktime_trpy_t *trpy);
int quicktime_trpy_delete(quicktime_trpy_t *trpy);
int quicktime_trpy_dump(quicktime_trpy_t *trpy);
int quicktime_read_trpy(quicktime_t *file, quicktime_trpy_t *trpy);
int quicktime_write_trpy(quicktime_t *file, quicktime_trpy_t *trpy);

#endif
