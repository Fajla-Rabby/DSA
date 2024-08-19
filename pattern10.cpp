#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
/* 
    int row = 1;
    char start = 'A';
    while(row <= n)
    {
        int col = 1;
        while(col <= n)
        {
            cout<<start;
            start++;
            col++;
        }
        start -= 2;
        cout<<endl;
        row++;
    } */
   //another approch
   int row = 1;
   while(row <= n)
   {
     int col = 1;
     while(col <= n){
        char ch = 'A' + row + col - 2;
        cout<<ch;
        col++;
     }
   }
}