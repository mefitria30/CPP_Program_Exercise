#include <iostream>
using namespace std;

int caribiner(int data[], int n, int k)
{
    int ada, atas, bawah, tengah, posisi;
    ada = 0;
    bawah = 0;
    atas = n - 1;
    while (atas >= bawah)
    {
        tengah = (atas + bawah) / 2;
        if (k > data[tengah])
            bawah = tengah + 1;
        else
        {
            ada = 1;
            posisi = tengah;
            bawah = atas + 1;
        }
    }
    if (!ada)
        posisi = -1;
    return posisi;
}

int main()
{
    int data[] = {1, 2, 3, 4, 5, 7, 8, 10, 13, 14, 15};
    int dicari = 13;
    cout << "Posisi " << dicari << " dalam larik data : "
         << caribiner(data, 11, dicari) << "\n";
    return 0;
}
