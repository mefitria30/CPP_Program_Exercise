#include <iostream>

using namespace std;

void bubble_sort(int arr[], int length)
{
    bool not_sorted = true;
    int j = 0, tmp;

    while (not_sorted)
    {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            } // end of if
        } // end of for loop
    } // end of while loop
} // end of bubble_sort

//
void print_array(int a[], int length)
{

    for (int i = 0; i < length; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}
int main()
{

    int length = 7;
    int a[length] = {22, 10, 15, 3, 8, 2, 90};

    bubble_sort(a, length);
    print_array(a, length);
}