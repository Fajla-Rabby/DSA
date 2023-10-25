#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if (a % 2 == 0)
    {
        cout << a << " is Even" << endl;
    }
    else
    {
        cout << a << " is Odd" << endl;
    }

    return 0;
}