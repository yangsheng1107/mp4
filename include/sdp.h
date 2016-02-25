#ifndef __SDP_H__
#define __SDP_H__

#include "private.h"

int quicktime_sdp_init(quicktime_sdp_t *sdp);
int quicktime_sdp_set(quicktime_sdp_t *sdp, char *string);
int quicktime_sdp_append(quicktime_sdp_t *sdp, char *appendString);
int quicktime_sdp_delete(quicktime_sdp_t *sdp);
int quicktime_sdp_dump(quicktime_sdp_t *sdp);
int quicktime_read_sdp(quicktime_t *file, quicktime_sdp_t *sdp, quicktime_atom_t* sdp_atom);
int quicktime_write_sdp(quicktime_t *file, quicktime_sdp_t *sdp);

#endif
