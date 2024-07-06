#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int maxrow = 10;

string EmpName[maxrow] = {};
string EmpID[maxrow] = {};

void OpenFile()
{
    string line;
    ifstream myfile(".\employee.txt");

    if (myfile.is_open())
    {
        int x = 0;
        while (getline(myfile, line))
        {
            int l = line.length();

            EmpID[x] = line.substr(0, 3);
            EmpName[x] = line.substr(4, l - 4);
            x++;
        }
    }
    else
    {
        cout << "Unable to open the file!" << endl;
    }
}

void AddRecord()
{
    char empno[5];
    char name[50];

    cin.ignore();

    cout << "Employee ID. ";
    cin.getline(empno, 5);

    cout << "Employee Name. ";
    cin.getline(name, 50);

    for (int x = 0; x < maxrow; x++)
    {
        if (EmpID[x] == "\0")
        {
            EmpID[x] = empno;
            EmpName[x] = name;

            break;
        }
    }
}

void ListRecord()
{
    system("cls");
    cout << "Current Record(s)" << endl;
    cout << "============================" << endl;

    int counter = 0;
    cout << "No.            | ID            | NAME      " << endl
         << "--------------------------------------\n";
    for (int x = 0; x < maxrow; x++)
    {
        if (EmpID[x] != "\0")
        {
            counter++;
            cout << " " << counter << " " << EmpID[x] << " " << EmpName[x] << endl;
        }
    }

    if (counter == 0)
    {
        cout << "No record found!" << endl;
    }

    cout << "====================================" << endl;
}

void SearchRecord(string search)
{
    system("cls");
    cout << "Current Record(s)" << endl;
    cout << "====================================" << endl;
    int counter = 0;
    for (int x = 0; x < maxrow; x++)
    {
        if (EmpID[x] == search)
        {
            counter++;
            cout << " " << counter << " " << EmpID[x] << " " << EmpName[x] << endl;
            break;
        }
    }

    if (counter == 0)
    {
        cout << "No Record Found" << endl;
    }

    cout << "====================================" << endl;
}

void UpdateRecord(string search)
{
    char empno[5];
    char name[50];

    int counter = 0;

    for (int x = 0; x < maxrow; x++)
    {
        if (EmpID[x] == search)
        {
            counter++;

            cout << "Employee Name. ";
            cin.getline(name, 50);

            EmpName[x] = name;

            cout << "Update Successfull!!" << endl;
            break;
        }
    }

    if (counter == 0)
    {
        cout << "ID Doesn't exist" << endl;
    }
}

void DeleteRecord(string search)
{
    int counter = 0;

    for (int x = 0; x < maxrow; x++)
    {
        if (EmpID[x] == search)
        {
            counter++;

            EmpName[x] = "";
            EmpID[x] = "";

            cout << "Successfully Deleted!!!" << endl;
            break;
        }
    }

    if (counter == 0)
    {
        cout << "ID Number doesn't exist";
    }
}

void SaveToFile()
{
    ofstream myfile;
    myfile.open(".\employee.txt");

    for (int x = 0; x < maxrow; x++)
    {
        if (EmpID[x] == "\0")
        {
            break;
        }
        else
        {
            myfile << EmpID[x] + "," + EmpName[x] << endl;
        }
    }
}

int main()
{
    std::cout << "MENU\n";
    int option;
    string empID;
    system("cls");
    OpenFile();

    do
    {
        cout << "[1] Create Records" << endl;
        cout << "[2] Update Records" << endl;
        cout << "[3] Delete Records" << endl;
        cout << "[4] Search Records" << endl;
        cout << "[5] Display All Records" << endl;
        cout << "[6] Exit and Save to Textfile" << endl;

        cout << "=============================" << endl;

        cout << "Select Option >> ";
        cin >> option;

        switch (option)
        {
        case 1:
            AddRecord();
            system("CLS");
            break;

        case 2:
            cin.ignore();
            cout << "Search by ID >> ";
            getline(cin, empID);
            UpdateRecord(empID);
            break;

        case 3:
            cin.ignore();
            cout << "Delete by ID >> ";
            getline(cin, empID);
            DeleteRecord(empID);
            cin.ignore();
            system("cls");
            break;

        case 4:
            cin.ignore();
            cout << "Search by ID >> ";
            getline(cin, empID);
            SearchRecord(empID);
            break;

        case 5:
            ListRecord();
            break;
        }
    } while (option != 6);

    SaveToFile();
    cout << "Exit... Saving to file!!" << endl;
    return 0;
}