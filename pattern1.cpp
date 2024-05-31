#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int r = 1;
    
   if(n > 1 && n < 100)
   {
     while(r <= n)
    {
        int j = 1;
        while(j <= n)
        {
            cout<<"0";
             j = j + 1;
        }
       
        cout<<endl;
         r = r + 1;
    }
   }
   else{
    cout<<"input number between 1 to 100";
   }
   
}