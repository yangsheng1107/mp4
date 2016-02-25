#include "quicktime.h"
#include "funcprotos.h"
#include "smhd.h"

int quicktime_smhd_init(quicktime_smhd_t *smhd)
{
    smhd->version = 0;
    smhd->flags = 0;
    smhd->balance = 0;
    smhd->reserved = 0;

    return 0;
}

int quicktime_smhd_delete(quicktime_smhd_t *smhd)
{

    return 0;
}

int quicktime_smhd_dump(quicktime_smhd_t *smhd)
{
    printf("    sound media header\n");
    printf("     version %d\n", smhd->version);
    printf("     flags %ld\n", smhd->flags);
    printf("     balance %d\n", smhd->balance);
    printf("     reserved %d\n", smhd->reserved);

    return 0;
}

int quicktime_read_smhd(quicktime_t *file, quicktime_smhd_t *smhd)
{
    smhd->version = quicktime_read_char(file);
    smhd->flags = quicktime_read_int24(file);
    smhd->balance = quicktime_read_int16(file);
    smhd->reserved = quicktime_read_int16(file);

    return 0;
}

int quicktime_write_smhd(quicktime_t *file, quicktime_smhd_t *smhd)
{
    quicktime_atom_t atom;
    quicktime_atom_write_header(file, &atom, "smhd");

    quicktime_write_char(file, smhd->version);
    quicktime_write_int24(file, smhd->flags);
    quicktime_write_int32(file, 0x00000000);


    quicktime_atom_write_footer(file, &atom);

    return 0;
}
