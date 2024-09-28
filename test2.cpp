#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    int result = 0;

    while (tt--)
    {
        int ar[3];
        cin>>ar[0] >> ar[1] >> ar[2];
        if (ar[0] + ar[1] + ar[2] >= 2)
        {
            result += 1;
        }
    }
    cout << result;

    return 0;
}