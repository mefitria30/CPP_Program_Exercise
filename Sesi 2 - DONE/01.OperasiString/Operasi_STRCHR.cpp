#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    char str[100] = "Fitria Melliyanni";
    char karakter = 'M';

    char *hasil;

    hasil = strchr(str, karakter);

    printf("Hasil peubah : %s\n", hasil);

    printf("Karakter %c ditemukan pada indeks ke-%d", karakter, (hasil - str));

    getch();
    return 0;
}

// Strchr() => Digunakan untuk mencari nilai karakter dalam string.