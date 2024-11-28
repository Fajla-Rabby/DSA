#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    for(int i = 0; i <size; i+=2)
    {
        if(i + 1 < size)
        {
            arr[i] = arr[i] + arr[i + 1];
            arr[i + 1] = arr[i] - arr[i + 1];
            arr[i] = arr[i] - arr[i + 1];

        }
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int even[6] = {3,5,2,5,1,4};
    int odd[5] = {3,5,2,5,1};

    swapAlternate(even, 6);
    printArray(even, 6);
    cout<<endl;
    swapAlternate(odd, 5);
    printArray(odd, 5);
    return 0;
}