#include <iostream>
#include <math.h>

// digit ber kore, 1 er case e 2^0 add kore dibo 0 er case korbo na
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0, ans = 0;
    while (n != 0)
    {
        int digit = n & 1;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }
    cout << ans << endl;
}