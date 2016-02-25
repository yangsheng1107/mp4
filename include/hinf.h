#ifndef __HINF_H__
#define __HINF_H__

#include "private.h"

int quicktime_hinf_init(quicktime_hinf_t *hinf);
int quicktime_hinf_delete(quicktime_hinf_t *hinf);
int quicktime_hinf_dump(quicktime_hinf_t *hinf);
int quicktime_read_hinf(quicktime_t *file, quicktime_hinf_t *hinf, quicktime_atom_t *parent_atom);
int quicktime_write_hinf(quicktime_t *file, quicktime_hinf_t *hinf);

#endif
