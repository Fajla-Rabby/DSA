#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    // n = 576 hole n k 100 diye bhag korle 5 thakbe
    cout << n / 100 << " nota(s) de R$ 100,00" << endl;
    // n = 576 hole n k 100 diye bhag korle bhagsesh 76 thakbe
    n = n % 100;
    // n = 76 hole n k 50 diye bhag korle 1 thakbe
    cout << n / 50 << " nota(s) de R$ 50,00" << endl;
    // n = 76 hole n k 50 diye bhag korle bhagsesh 26 thakbe
    n = n % 50;
    cout << n / 20 << " nota(s) de R$ 20,00" << endl;
    n = n % 20;
    cout << n / 10 << " nota(s) de R$ 10,00" << endl;
    n = n % 10;
    cout << n / 5 << " nota(s) de R$ 5,00" << endl;
    n = n % 5;
    cout << n / 2 << " nota(s) de R$ 2,00" << endl;
    n = n % 2;
    cout << n / 1 << " nota(s) de R$ 1,00" << endl;

}