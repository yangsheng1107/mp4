#ifndef __AVCC_H__
#define __AVCC_H__

#include "private.h"

int quicktime_avcc_init(quicktime_avcc_t *avcc);
void quicktime_get_avcc_header(quicktime_avcc_t *avcc,
                               unsigned char *data, 
                               int *size);
void quicktime_set_avcc_header(quicktime_avcc_t *avcc,
                               unsigned char *data, 
                               int size);
void quicktime_write_avcc(quicktime_t *file, 
                          quicktime_avcc_t *avcc);
int quicktime_read_avcc(quicktime_t *file, 
                        quicktime_atom_t *parent_atom,
                        quicktime_avcc_t *avcc);
void quicktime_avcc_dump(quicktime_avcc_t *avcc);

						
#endif
