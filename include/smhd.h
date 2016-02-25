#ifndef __SMHD_H__
#define __SMHD_H__

#include "private.h"

int quicktime_smhd_init(quicktime_smhd_t *smhd);
int quicktime_smhd_delete(quicktime_smhd_t *smhd);
int quicktime_smhd_dump(quicktime_smhd_t *smhd);
int quicktime_read_smhd(quicktime_t *file, quicktime_smhd_t *smhd);
int quicktime_write_smhd(quicktime_t *file, quicktime_smhd_t *smhd);

#endif
