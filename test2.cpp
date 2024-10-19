#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    // int result = 0;
     int x = 0;

    while (tt--)
    {
        int n, k;
        cin>>n>>k;
        int result = 0;;

        while(n>0)
        {
            result+= n % k;
            n = (n - pow(k,x));
            x++;
            cout<<x;
        }
        
    }
   
    return 0;
}