#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

struct buku
{
    int id;
    string judul_buku;
    string pengarang_buku;
    int stok_buku;
};

buku data_buku;

int menu;

void CreateBuku()
{
    fstream createBukuBaru;
    createBukuBaru.open("buku.txt", ios::app);

    createBukuBaru << data_buku.id << endl;
    createBukuBaru << data_buku.judul_buku << endl;
    createBukuBaru << data_buku.pengarang_buku << endl;
    createBukuBaru << data_buku.stok_buku << endl
                   << endl;

    createBukuBaru.close();
} // function untuk input buku

void ReadBuku()
{
    ifstream ReadBukuTersimpan;
    ReadBukuTersimpan.open("buku.txt");

    ReadBukuTersimpan >> data_buku.id;
    ReadBukuTersimpan >> data_buku.judul_buku;
    ReadBukuTersimpan >> data_buku.pengarang_buku;
    ReadBukuTersimpan >> data_buku.stok_buku;

    while (!ReadBukuTersimpan.eof())
    {
        cout << "ID         : \t" << data_buku.id << endl;
        cout << "Judul      : \t" << data_buku.judul_buku
             << endl;
        cout << "Pengarang  : \t" << data_buku.pengarang_buku << endl;
        cout << "Stok       : \t" << data_buku.stok_buku << endl;

        cout << "================================" << endl;

        ReadBukuTersimpan >> data_buku.id;
        ReadBukuTersimpan >> data_buku.judul_buku;
        ReadBukuTersimpan >> data_buku.pengarang_buku;
        ReadBukuTersimpan >> data_buku.stok_buku;
    }

    ReadBukuTersimpan.close();
}

int main()
{
loop:
    cout
        << "------------------------------" << endl;
    cout << "::: LIBRARY SYSTEM PROJECT :::" << endl;
    cout << "------------------------------" << endl;

    cout << "[1]. Input Data Buku" << endl;
    cout << "[2]. Lihat Data Buku" << endl;
    cout << "------------------------------" << endl;

    cout << "Pilih Menu : ";
    cin >> menu;

    switch (menu)
    {
    case 1:
    {
        int returnMenu = 1;
        while (returnMenu != 0)
        {
            system("cls");

            cout << "=== INPUT DATA BUKU ===" << endl;
            cout << "Masukkan ID Buku           :\t";
            cin >> data_buku.id;

            cout << "Masukkan Judul Buku        : \t";
            cin >> data_buku.judul_buku;

            cout << "Masukkan Pengarang Buku    : \t";
            cin >> data_buku.pengarang_buku;

            cout << "Masukkan Stok Buku         :\t";
            cin >> data_buku.stok_buku;

            CreateBuku();

            cout << "Apakah ingin input data baru lagi? [0] NO || [1] YES :";
            cin >> returnMenu;
        }

        system("cls");

        goto loop;

        break;
    }

    case 2:
    {
        int returnMenu = 1;
        while (returnMenu != 0)
        {
            cout << "=== LIHAT DATA BUKU ===" << endl;

            ReadBuku();

            cout << "Kembali ke menu utama [0] : ";
            cin >> returnMenu;

            if (returnMenu != 0)
            {
                system("cls");

                goto loop;
            }
        }

        system("cls");

        goto loop;

        break;
    }

    default:
        break;
    }

    return 0;
}