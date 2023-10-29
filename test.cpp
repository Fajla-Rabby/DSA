#include <iostream>

using namespace std;

// int ap(int n)
// {
//     int ans = (3 * n + 7);
//     return ans;
// }

int main()
{
    // print from 1 to 100
    for (int i = 1; i <= 100; i++)
        cout << i << endl;

    // print 10 to 1
    for (int i = 10; i >= 1; i--)
        cout << i << endl;

    // print odd number from 1 to 10
    for (int i = 1; i <= 10; i += 2)
        cout << i << endl;

    // counts how many 2 divides 100
    int x = 100;
    int cnt = 0;
    while(x % 2 == 0)
    {
        x = x / 2;
        cnt++;
    }
    cout<<cnt<<endl;
}