#include<iostream>
#include <stdio.h>
using namespace std;

int main(){

    int number[3];

    number[0] = 1;
    number[1] = 2;
    number[2] = 3;

    for (int i = 0; i <= 2; i++)
    {
        cout << number[i] << endl;
    }

    return 0;
}

