#include "quicktime.h"

int main(int argc, char *argv[])
{
	int i, duration;
    quicktime_t* qt;

    qt = quicktime_open("test.mp4", TRUE, FALSE, FALSE);
    printf("width = %d height = %d \r\n", qt->moov.trak[0]->mdia.minf.stbl.stsd.table->width, qt->moov.trak[0]->mdia.minf.stbl.stsd.table->height);

	for(duration = 0, i = 0; i < qt->moov.trak[0]->mdia.minf.stbl.stts.total_entries; i++)
	{
		duration += qt->moov.trak[0]->mdia.minf.stbl.stts.table->sample_count * qt->moov.trak[0]->mdia.minf.stbl.stts.table->sample_duration;
	}
    printf("video duration = %ld \r\n",(duration/(qt->moov.trak[0]->mdia.mdhd.time_scale)));
    printf("video duration = %ld \r\n",((qt->moov.trak[0]->mdia.mdhd.duration)/(qt->moov.trak[0]->mdia.mdhd.time_scale)));

	for(duration = 0, i = 0; i < qt->moov.trak[1]->mdia.minf.stbl.stts.total_entries; i++)
	{
		duration += qt->moov.trak[1]->mdia.minf.stbl.stts.table->sample_count * qt->moov.trak[1]->mdia.minf.stbl.stts.table->sample_duration;
	}
    printf("audio duration = %ld \r\n",(duration/(qt->moov.trak[1]->mdia.mdhd.time_scale)));
    printf("audio duration = %ld \r\n",((qt->moov.trak[1]->mdia.mdhd.duration)/(qt->moov.trak[1]->mdia.mdhd.time_scale)));

    printf("sps/pps \r\n");
	for(i = 0; i < qt->moov.trak[0]->mdia.minf.stbl.stsd.table->avcc.data_size; i++)
	{
		printf("0x%02x ", (unsigned char)qt->moov.trak[0]->mdia.minf.stbl.stsd.table->avcc.data[i]);
	}
    printf("\r\n");

	quicktime_close(qt);

    return 0;
}
