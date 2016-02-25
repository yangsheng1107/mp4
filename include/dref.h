#ifndef __DREF_H__
#define __DREF_H__

#include "private.h"

int quicktime_dref_table_init(quicktime_dref_table_t *table);
int quicktime_dref_table_delete(quicktime_dref_table_t *table);
int quicktime_dref_table_dump(quicktime_dref_table_t *table);
int quicktime_dref_init(quicktime_dref_t *dref);
int quicktime_dref_init_all(quicktime_dref_t *dref);
int quicktime_dref_delete(quicktime_dref_t *dref);
int quicktime_dref_dump(quicktime_dref_t *dref);
int quicktime_read_dref(quicktime_t *file, quicktime_dref_t *dref);
int quicktime_write_dref(quicktime_t *file, quicktime_dref_t *dref);


#endif
