#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    char string1[] = "Belajar";
    char string2[] = " Logika Algoritma";

    cout << "Menggabungkan String" << endl;

    cout << " -------------------- " << endl;

    cout << "string1 : " << string1 << endl;

    cout << "string2 : " << string2 << endl;

    strcat(string1, string2);

    cout << "\nSetelah digabung, string1 sekarang menjadi: " << string1 << endl;

    getche();
}

// Strcat() => Digunakan untuk menggabungkan nilai string.