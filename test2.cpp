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
        string s;
        cin>>s;
        if(s[0] == '+')
        {
            ++x;
        }
        else if(s[2] == '+')
        {
            x++;
        }
        else if(s[0] == '-')
        {
            --x;
        }
        else if(s[2] == '-')
        {
            x--;
        }
    }

    cout << x << endl;
   
    return 0;
}