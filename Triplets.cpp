#include <iostream>

using namespace std;

int main()
{
    int size = 2;
   int alice[size], bob[size];
   for(int i = 0; i <= size; i++)
   {
        cin>>alice[i];
   }
   for(int i = 0; i <= size; i++)
   {
        cin>>bob[i];
   }

    int aliceScore = 0, bobScore = 0;
    for(int i = 0; i <= size; i++)
    {
        if(alice[i] > bob[i])
        {
            aliceScore++;
        }
        else if(alice[i] < bob[i])
        {
            bobScore++;
        }
        else if(alice[i] == bob[i])
        {
            
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }
    cout<<aliceScore<<" "<<bobScore<<endl;
    return 0;
    
}