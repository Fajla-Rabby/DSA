#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int hour, minute, second;

    //3600 second e 1 hour, n k 3600 diye bhag dile houe ber hobe
    hour = n / 3600;
    //n er maan update hobe
    n = n % 3600;
    //60 second e 1 minute, minute ber hobe
    minute = n / 60;
    //n er maan update
    n = n % 60;
    //second
    second = n / 1;
    cout<<hour<<":"<<minute<<":"<<second<<endl;

}