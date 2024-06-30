#include<iostream>
#include <stdio.h>
using namespace std;

// membuat struct
struct data_students{
    char name[20];
    char NIM[8];
};

struct student_groups{
    struct data_students chief;
    struct data_students member[2];
} group[3]; // inisialisasi variable structure dilakukan sekaligus dengan deklarasi structure

int main(){
    for (int i = 0; i < 3; i++) // i = no group
    {
        cout << "\n\nGROUP" << i + 1;
        cout << "\n\tCHIEF" << "\n\tName : ";
        cin >> group[i].chief.name;
        cout << "\tNIM : ";
        cin >> group[i].chief.NIM;

        for (int j = 0; j < 2; ++j) // j = no member
        {
            cout << "\n\tMEMBER" << j + 1;
            cout << "\n\tName : ";
            cin >> group[i].member[j].name;
            cout << "\tNIM :";
            cin >> group[i].member[j].NIM;
        }
    }
    
    for (int i = 0; i < 3; ++i)
    {
        cout << "\nGROUP" << i + 1;
        cout << "\nChief : " << group[i].chief.name;
        cout << "(" << group[i].chief.NIM << ")";
        cout << "\nMember : ";
    

        for (int j = 0; j < 2; ++j)
        {
            cout << "\n\t" << group[i].member[j].name;
            cout << "(" << group[i].member[j].NIM << ")";
        }
    }
    
    return 0;
}