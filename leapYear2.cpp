#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        cout << year << " year is leap year" << endl;
    else
        cout << year << " year is not a leap year" << endl;

    return 0;
}