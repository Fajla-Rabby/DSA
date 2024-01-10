#include <iostream>
using namespace std;

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; ++j)
            {
                sum += i * i;
            }
        }
        cout << sum << endl;
    }
}