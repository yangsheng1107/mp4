#ifndef __ESDS_H__
#define __ESDS_H__

#include "private.h"

int quicktime_esds_init(quicktime_esds_t *esds);
int quicktime_esds_get_decoder_config(quicktime_esds_t* esds, u_char** ppBuf, int* pBufSize);
int quicktime_esds_set_decoder_config(quicktime_esds_t* esds, u_char* pBuf, int bufSize);
int quicktime_esds_delete(quicktime_esds_t *esds);
int quicktime_esds_dump(quicktime_esds_t *esds);
int quicktime_read_esds(quicktime_t *file, quicktime_esds_t *esds);
int quicktime_write_esds_audio(quicktime_t *file, quicktime_esds_t *esds, int esid);
int quicktime_write_esds_video(quicktime_t *file, quicktime_esds_t *esds, int esid);

#endif
