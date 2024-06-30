#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

main(){
    char asal[100];
    char hasil[100];
    // clrscr();
    system("cls");

    cout << "Masukkan kalimat : ";
    
    gets(asal);

    strcpy(hasil, asal); 
    cout<< endl;
    
    cout << "Kalimat asal : " << asal << endl;
    
    cout << "Kalimat hasil : " << hasil << endl;

    getch();
}

// Strcpy() => Digunakan untuk menyalin nilai string.