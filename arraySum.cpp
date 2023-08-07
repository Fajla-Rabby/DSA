#include <iostream>

using namespace std;

int main()
{
    int size; 
    long long int sum = 0;
    cin>>size;

    long double array[size];
    for(int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    for(int i = 0; i <size; i++)
    {
        sum = sum + array[i] ;
    }

    cout<<sum<<endl;


}