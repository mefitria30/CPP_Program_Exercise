#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

    int matrixA[2][2];

    matrixA[1][1] = 3;
    matrixA[1][2] = 2;
    matrixA[2][1] = 1;
    matrixA[2][2] = 3;

    int matrixB[2][2];
    matrixB[1][1] = 3;
    matrixB[1][2] = 1;
    matrixB[2][1] = -1;
    matrixB[2][2] = 0;

    int matrixC[2][2];

    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
            cout << matrixC[i][j] << endl;
        }
    }

    return 0;
}
