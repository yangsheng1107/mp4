#ifndef __DINF_H__
#define __DINF_H__

#include "private.h"

int quicktime_dinf_init(quicktime_dinf_t *dinf);
int quicktime_dinf_delete(quicktime_dinf_t *dinf);
int quicktime_dinf_init_all(quicktime_dinf_t *dinf);
int quicktime_dinf_dump(quicktime_dinf_t *dinf);
int quicktime_read_dinf(quicktime_t *file, quicktime_dinf_t *dinf, quicktime_atom_t *dinf_atom);
int quicktime_write_dinf(quicktime_t *file, quicktime_dinf_t *dinf);

#endif
