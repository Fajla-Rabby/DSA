#include <iostream>
using namespace std;

// hold
void printarray(int arr[], int size)
{
    cout << "printing the array" << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done" << endl;
}

int main()
{
    // declare
    int number[15];

    // accesing an array
    cout << "value at 14 index: " << number[14] << endl;

    // initialing an array
    int second[3] = {5, 7, 11};

    // accesing an element
    cout << "value at 2 index: " << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    // printarray(third, 15);

    int fourth[10] = {0};

    n = 10;
    // printarray(fourth, 10);

    int fifth[10] = {1};
    n = 10;
    // printarray(fifth, 10);

    int fifthsize = sizeof(fifth) / sizeof(int);
    cout << "size of fifth it: " << fifthsize << endl;

    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    cout << ch[3] << endl;

    cout << "printing the array" << endl;
    // print the array
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "printing done" << endl;

    cout << endl
         << "everything is fine" << endl
         << endl;

    return 0;
}