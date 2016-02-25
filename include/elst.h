#ifndef __ELST_H__
#define __ELST_H__

#include "private.h"

int quicktime_elst_table_init(quicktime_elst_table_t *table);
int quicktime_elst_init(quicktime_elst_t *elst);
int quicktime_elst_init_all(quicktime_elst_t *elst);
int quicktime_elst_delete(quicktime_elst_t *elst);
int quicktime_elst_dump(quicktime_elst_t *elst);
int quicktime_read_elst(quicktime_t *file, quicktime_elst_t *elst);
int quicktime_write_elst(quicktime_t *file, quicktime_elst_t *elst, long duration);

#endif
