#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    bool isPrime = 1;

    for (int i = 1; i < n; i++)
    {
        // not a prime number
        if (n % i == 0)
        {
            // cout << "not a prime number" << endl;
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not a prime number" << endl;
    }
    else
    {
        cout << "Is a prime number"<<endl;
    }

    //continue
    for (int i = 0; i < 5; i++)
    {
        cout<<" HI "<<endl;
        cout<<" Hey "<<endl;
        continue;

        cout<<"Reply to karde"<<endl;
    }
    
}