#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

main(){
    char nama[50] = "Logika Algoritma";

    char kosong[50] = "";

    system("cls");

    cout << "Jumlah karakter dari nama adalah " << strlen(nama) << endl;

    cout << "Jumlah karakter dari kosong adalah " << strlen(kosong) << endl;

    getche();
}

// Strlen() => Digunakan untuk mengetahui panjang nilai string.