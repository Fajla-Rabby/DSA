#include <iostream>

using namespace std;

int main()
{
   /* Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.

Example
InputCopy
abcd
ef
OutputCopy
4 2
abcdef
ebcd af */
   
      string A, B;
      cin >> A >> B;
      cout << A.size() << " " << B.size() << endl;
      cout << A + B << endl;
      cout << B[0] + A.substr(1) << " " << A[0] + B.substr(1) << endl;
      return 0;

}