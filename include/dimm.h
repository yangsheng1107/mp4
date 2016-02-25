#ifndef __DIMM_H__
#define __DIMM_H__

#include "private.h"

int quicktime_dimm_init(quicktime_dimm_t *dimm);
int quicktime_dimm_delete(quicktime_dimm_t *dimm);
int quicktime_dimm_dump(quicktime_dimm_t *dimm);
int quicktime_read_dimm(quicktime_t *file, quicktime_dimm_t *dimm);
int quicktime_write_dimm(quicktime_t *file, quicktime_dimm_t *dimm);

#endif
