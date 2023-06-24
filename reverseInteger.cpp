//https://leetcode.com/problems/reverse-integer
#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x)
{
    int ans = 0;
        //n er value 0 na hoa porjonto loop ta cholbe
        while(x != 0)
        {
            //modulus kore  kore last digit gula ber korte thakbo
            int digit = x % 10;
            //for the case of the value go to outside  the signed 32 bi integer range
            if( (ans > INT_MAX/10) || (ans < INT_MIN/10))
            {
                return 0;
            }
            // ans variable e purber ans er sagthe 10 gun kore oitar asol dosomik 
            // jaigai niye jabo then digit ta ber kore jog korlei oi value ta peye jabo
             ans = (ans * 10) + digit;
            // ebr x er value update korte thakbo
            x = x / 10;
        }
        return ans;
    
}

int main()
{
    int x;
    cin>> x;
    cout<< reverse(x) << endl;
    
}