#ifndef __RTP_H__
#define __RTP_H__

#include "private.h"

int quicktime_rtp_init(quicktime_rtp_t *rtp);
int quicktime_rtp_set(quicktime_rtp_t *rtp, char *string);
int quicktime_rtp_append(quicktime_rtp_t *rtp, char *appendString);
int quicktime_rtp_delete(quicktime_rtp_t *rtp);
int quicktime_rtp_dump(quicktime_rtp_t *rtp);
int quicktime_read_rtp(quicktime_t *file, quicktime_rtp_t *rtp, quicktime_atom_t* rtp_atom);
int quicktime_write_rtp(quicktime_t *file, quicktime_rtp_t *rtp);

#endif
