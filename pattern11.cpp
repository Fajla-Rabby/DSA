#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int row = 1;
    /*  
    for pattern 
    A
    BC
    CDE
    DEFG 
    */
    /* while(row <= n)
    {
        int col = 1;

        while(col <= row)
        {
            char ch = ('A' + row + col  - 2);
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
     */
    while(row <= n)
    {
        int col = 1;
        char start = 'A' + n - row;
        while(col <= row){
            cout << start;
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
}