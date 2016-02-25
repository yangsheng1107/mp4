#ifndef __MATRIX_H__
#define __MATRIX_H__

#include "private.h"

int quicktime_matrix_init(quicktime_matrix_t *matrix);
int quicktime_matrix_delete(quicktime_matrix_t *matrix);
int quicktime_read_matrix(quicktime_t *file, quicktime_matrix_t *matrix);
int quicktime_matrix_dump(quicktime_matrix_t *matrix);
int quicktime_write_matrix(quicktime_t *file, quicktime_matrix_t *matrix);

#endif
