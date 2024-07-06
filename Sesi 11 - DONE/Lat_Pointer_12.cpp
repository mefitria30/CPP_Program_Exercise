/* File program : pbulan.c
Fungsi dengan keluaran berupa pointer yang menunjuk string */ \
#include<stdio.h>
char *nama_bulan(int n); // prototype function

main()
{
    int bl;
    char *pch;

    printf("Masukkan Bulan 1..12 : ");
    scanf("%d", &bl);
    pch = nama_bulan(bl);
    printf("Bulan ke-%d adalah %s\n", bl, nama_bulan(bl));
}

char *nama_bulan(int n)
{
    static char *bulan[] = {"Kode bulan salah",
                            "Januari", "Februari", "Maret",
                            "April",
                            "Mei",
                            "Juni",
                            "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    return ((n < 1 || n > 12) ? bulan[0] : bulan[n]);
}