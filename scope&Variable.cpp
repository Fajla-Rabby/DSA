#include <iostream>

using namespace std;

int sum(int, int);

int main()
{
    int x, y, s;
    cout << "Enter first numbrt: " << endl;
    cin >> x;

    cout << "Enter second number: " << endl;
    cin >> y;
    s = sum(x, y);
    cout<<"The sum is: "<<s;

}

int sum(int a, int b)
{
    int total;
    total = a + b;
    return total;
}