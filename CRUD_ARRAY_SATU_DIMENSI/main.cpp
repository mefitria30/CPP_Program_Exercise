#include <iostream>
using namespace std;

#define max 10
string buah[max], loop;
int pos = 0;

void display()
{
    system("cls");
    if (pos > 0)
    {
        cout << "Data tersimpan" << endl;
        for (int i = 0; i < pos; i++)
        {
            cout << i + 1 << ". " << buah[i] << endl;
        }
    }
    else
    {
        cout << "=== Data Kosong ===" << endl;
    }
}

void add()
{
    do
    {
        display();
        if (pos < max)
        {
            cin.ignore(); // supaya inputan bisa menggunakan spasi
            cout << "tambah data : ";
            getline(cin, buah[pos]);
            pos++;

            display();

            cout << "ulangi? (y/t)";
            cin >> loop;
        }
        else
        {
            cout << "=== Memori Penuh ===" << endl;
            cout << "Kembali? (t)";
            cin >> loop;
        }
    } while (loop == "y");

    cout << "Tambah" << endl;
}

void edit()
{
    int y;
    do
    {
        display();
        cout << "ubah data ke : ";
        cin >> y;

        cin.ignore();
        cout << "ubah menjadi : ";
        getline(cin, buah[y - 1]);
        display();

        cout << "ubah lagi (y/t) : ";
        cin >> loop;
    } while (loop == "y");
}

void del()
{
    int x;
    do
    {
        display();
        if (pos > 0)
        {
            cout << "hapus data ke : ";
            cin >> x;

            for (int i = x; i < pos; i++)
            {
                buah[i - 1] = buah[i];
            }
            pos--;
            display();

            cout << "hapus lagi (y/t) : ";
            cin >> loop;
        }
        else
        {
            cout << "kembali (t) : ";
            cin >> loop;
        }

    } while (loop == "y");
}

int main()
{
    int menu;

    do
    {
        system("cls");

        cout << "1. Tambah\n2. Ubah\n3. Hapus\n4. Tampilkan\n5. Keluar" << endl;
        cout << "Pilih Menu : ";

        cin >> menu;

        switch (menu)
        {
        case 1:
            add();
            break;

        case 2:
            edit();
            break;

        case 3:
            del();
            break;

        case 4:
            do
            {
                display();
                cout << "kembali? (y)";
                cin >> loop;
            } while (loop != "y");

            break;

        case 5:
            cout << ".........." << endl;
            break;

        default:
            cout << "Pilih 1 - 5" << endl;
            break;
        }
    } while (menu != 5);
    cout << "Program selesai ....";
}