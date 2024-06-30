#include <stdio.h>
#define MAKS 20

void pemasukan_data(float[], int *);
void pengurutan_data(float[], int);
void penampilan_data(float[], int);

main()
{
    float data[MAKS];
    int jum_data;

    pemasukan_data(data, &jum_data);
    pengurutan_data(data, jum_data);
    penampilan_data(data, jum_data);
}

void pemasukan_data(float x[], int *pjumlah)
{
    int jum, i;
    printf("Jumlah data = ");
    scanf("%d", &jum);

    for (i = 0; i < jum; i++)
    {
        printf("Data ke-%d : ", i + 1);
        scanf("%f", &x[i]);
    }

    *pjumlah = jum;
}

void pengurutan_data(float x[], int jumlah)
{
    int i, j;
    float smtr;

    for (i = 0; i < jumlah - 1; i++)
        for (j = i + 1; j < jumlah; j++)
            if (x[i] > x[j]) /* penukaran data */
            {
                smtr = x[i];
                x[i] = x[j];
                x[j] = smtr;
            }
}

void penampilan_data(float x[], int jumlah)
{
    int i;

    printf("\nData setelah diurutkan : \n\n");
    for (i = 0; i < jumlah; i++)
        printf("Data ke-%d : %g\n", i + 1, x[i]);
}