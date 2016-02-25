#ifndef __VMHD_H__
#define __VMHD_H__

#include "private.h"

int quicktime_vmhd_init(quicktime_vmhd_t *vmhd);
int quicktime_vmhd_init_video(quicktime_t *file, 
                              quicktime_vmhd_t *vmhd, 
                              int frame_w,
                              int frame_h, 
                              float frame_rate);
int quicktime_vmhd_delete(quicktime_vmhd_t *vmhd);
int quicktime_vmhd_dump(quicktime_vmhd_t *vmhd);
int quicktime_read_vmhd(quicktime_t *file, quicktime_vmhd_t *vmhd);
int quicktime_write_vmhd(quicktime_t *file, quicktime_vmhd_t *vmhd);

#endif
