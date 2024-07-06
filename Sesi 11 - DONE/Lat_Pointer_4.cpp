/* Program : ptr4.c */
#include <stdio.h>
main()
{
    static int tgl_lahir[] = {16, 4, 1974};
    int *ptgl;

    ptgl = tgl_lahir;

    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
    printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]);
}