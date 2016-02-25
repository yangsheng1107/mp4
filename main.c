#include "quicktime.h"

int main(int argc, char *argv[])
{
    quicktime_t* qt;     
    qt = quicktime_open("./lg.mp4", TRUE, FALSE, FALSE);
    printf("quicktime_supported_video = %d \r\n",quicktime_supported_video(qt, 0));
    printf("duration = %d \r\n",quicktime_sample_duration(qt->moov.trak[0]));
    quicktime_close(qt);

    return 0;
}
