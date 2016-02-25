#ifndef __DREP_H__
#define __DREP_H__

#include "private.h"

int quicktime_drep_init(quicktime_drep_t *drep);
int quicktime_drep_delete(quicktime_drep_t *drep);
int quicktime_drep_dump(quicktime_drep_t *drep);
int quicktime_read_drep(quicktime_t *file, quicktime_drep_t *drep);
int quicktime_write_drep(quicktime_t *file, quicktime_drep_t *drep);

#endif
