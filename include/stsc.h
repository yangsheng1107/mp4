#ifndef __STSC_H__
#define __STSC_H__

#include "private.h"

int quicktime_stsc_init(quicktime_stsc_t *stsc);
int quicktime_stsc_init_video(quicktime_t *file, quicktime_stsc_t *stsc);
int quicktime_stsc_init_audio(quicktime_t *file, quicktime_stsc_t *stsc);
int quicktime_stsc_init_common(quicktime_t *file, quicktime_stsc_t *stsc);
int quicktime_stsc_delete(quicktime_stsc_t *stsc);
int quicktime_stsc_dump(quicktime_stsc_t *stsc);
int quicktime_read_stsc(quicktime_t *file, quicktime_stsc_t *stsc);
int quicktime_write_stsc(quicktime_t *file, quicktime_stsc_t *stsc);
int quicktime_update_stsc(quicktime_stsc_t *stsc, long chunk, long samples);

#endif
