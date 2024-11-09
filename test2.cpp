#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tt, k;
    cin >> tt >> k;
    int a[tt];
    int count = 0;

    for (int i = 0; i < tt; ++i) {
        cin >> a[i];
    }
 
    for(int i = 0; i < tt; ++i)
    {
        if(a[i] >= a[k - 1] && a[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}