#ifndef __UDTA_H__
#define __UDTA_H__

#include "private.h"

int quicktime_udta_init(quicktime_udta_t *udta);
int quicktime_udta_delete(quicktime_udta_t *udta);
int quicktime_read_udta_string(quicktime_t *file, char **string, int *size);
int quicktime_write_udta_string(quicktime_t *file, char *string, int size);

#endif
