#include <iostream>
using namespace std;

int maksimal = 5;
string arrayBuku[5];
int top = 0;

bool isFull()
{
    if (top == maksimal)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty()
{
    if (top == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void pushStack(string data)
{
    if (isFull())
    {
        cout << "data penuh" << endl;
    }
    else
    {
        arrayBuku[top] = data;
        top++;
    }
}

void popStack()
{
    if (top <= 0)
    {
        cout << "data telah kosong" << endl;
    }
    else
    {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void cetakStack()
{
    for (int i = top - 1; i >= 0; i--)
    {
        cout << arrayBuku[i] << endl;
    }
}

void peekArrayBuku(int posisi)
{
    if (isEmpty())
    {
        cout << "data kosong";
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        cout << "posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

void changeArray(int posisi, string rubah)
{
    if (isEmpty())
    {
        cout << "data kosong";
    }
    else
    {
        if (posisi > top)
        {
            cout << "posisi melebihi data yang ada" << endl;
        }
        else
        {
            int index = top;
            for (int i = 1; i <= posisi; i++)
            {
                index--;
            }
            arrayBuku[index] = rubah;
        }
    }
}

int countArray()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return top;
    }
}

void DestoyArray()
{
    for (int i = 0; i < top; i++)
    {
        arrayBuku[i] = "";
    }
    top = 0;
}

int main()
{
    pushStack("matematika");
    pushStack("struktur data");
    pushStack("statistik");
    pushStack("bahasa inggris");
    pushStack("biologi");
    cetakStack();
    cout << "\n"
         << endl;
    popStack();
    cetakStack();
    cout
        << "\n"
        << endl;
    peekArrayBuku(2);
    cout << "jumlah data = " << countArray() << endl;
    cout << "\n"
         << endl;
    changeArray(3, "Algoritma Pemrograman");
    cetakStack();
    DestoyArray();
    cout << "Apakah data kosong? " << isEmpty();
    return 0;
}