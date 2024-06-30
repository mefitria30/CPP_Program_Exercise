#include<iostream>
#include <stdio.h>
using namespace std;
// membuat struct
struct data
{
    char name[20];
    char address[20];
    int salary;
};

int main(){
    //Inisialisasi variabel structure
    struct data employee1;

    cout << "Employee's name : ";
    cin >> employee1.name;
    cout << "Employee's address : ";
    cin >> employee1.address;
    cout << "Employee's salary : ";
    cin >> employee1.salary;

    cout << endl << "Employee's data : ";
    cout << employee1.name << ", "; 
    cout << employee1.address << ", ";
    cout << employee1.salary;

    return 0;
}

