#include <iostream>

using namespace std;

// 1 = prime number
// 0 = not a prime number

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        // divide hoye geche, not a prime number
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << "is a prime number"<<endl;
    }
    else
    {
        cout << "Is not a prime number"<<endl;
    }
    return 0;
}