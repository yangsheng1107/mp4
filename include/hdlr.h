#ifndef __HDLR_H__
#define __HDLR_H__

#include "private.h"

int quicktime_hdlr_init(quicktime_hdlr_t *hdlr);
int quicktime_hdlr_init_video(quicktime_hdlr_t *hdlr);
int quicktime_hdlr_init_audio(quicktime_hdlr_t *hdlr);
int quicktime_hdlr_init_hint(quicktime_hdlr_t *hdlr);
int quicktime_hdlr_init_data(quicktime_hdlr_t *hdlr);
int quicktime_hdlr_delete(quicktime_hdlr_t *hdlr);
int quicktime_hdlr_dump(quicktime_hdlr_t *hdlr);
int quicktime_read_hdlr(quicktime_t *file, quicktime_hdlr_t *hdlr);
int quicktime_write_hdlr(quicktime_t *file, quicktime_hdlr_t *hdlr);

#endif
