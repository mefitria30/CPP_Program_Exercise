#include <stdio.h>
#define MAKS 5

main()
{
    int i;
    float total = 0, rata;
    float nilai_tes[MAKS]; /* deklarasi array */

    for (i = 0; i < MAKS; i++) /* pemasukan data nilai_tes */
    {
        printf("Nilai test ke -%d : ", i + 1);
        scanf("%f", &nilai_tes[i]);

        /* menghitung jumlah seluruh nilai */
        total = total + nilai_tes[i];
    }

    rata = total / MAKS; /* hitung nilai rata - rata */

    /* cetak nilai rata - rata */
    printf("\nNilai rata - rata = %g\n", rata);
}