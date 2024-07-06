/* Program : ptr6.c */
#include <stdio.h>
main()
{
    static int tgl_lahir[] = {16, 4, 1974};
    int i;
    int *ptgl;

    ptgl = tgl_lahir;
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
    for (i = 0; i < 3; i++)
        printf("Nilai dari tgl_lahir[i] = %d\n", *ptgl++);
}
