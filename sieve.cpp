#include <iostream>
#include <cmath>

using namespace std;
//TODO: Need to do some stuff 
// i prefer vercor
int prime[300000], nPrime;
//1 if not prime, 0 if prime
int mark[1000002];

void sieve(int n)
{
    int i, j, limit = sqrt(n * 1) + 2;

    //1 is not prime. you can also mark 0
    mark[1] = 1;
    //almost all the even are not prime
    for( i = 4; i<= n; i += 2) mark[i] = 1;

    //2 is prime
    prime[nPrime++] = 2;
    //run loop for only odds
    for(i = 3; i <= n; i += 2)
    if(!mark[i])
    {
        //i is prime
        prime[nPrime++] = i;

        //if we don't do this, following
        //i * i may overflow
        if(i <= limit)
        {
            //loop through all odd multiples of i
            //greter than i * i
            for(j = i * i; j <= n; j += i * 2)
            {
                //mark j not prime
                mark[j] = 1;
            }
        }
    }

}