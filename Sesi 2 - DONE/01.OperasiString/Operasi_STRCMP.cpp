#include <iostream>
// #include <stdafx.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

main(){
    char sa[] = "Logika";
    char sb[] = "Logika Algoritma";
    char sc[] = "Logika Algoritma & Pemrograman";

    /* Melakukan perbandingan terhadap dua string dan penampilan nilainya */

    printf("Nilai yang dibandingkan sa, sb : %d\n", strcmp(sa, sb));

    printf("Nilai yang dibandingkan sa, sc : %d\n", strcmp(sa, sc));

    printf("Nilai yang dibandingkan sb, sa : %d\n", strcmp(sb, sa));

    getch();
    return 0;
}

// Strcmp() => Digunakan untuk membandingkan 2 nilai string.