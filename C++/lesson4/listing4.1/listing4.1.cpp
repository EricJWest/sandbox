/* Listing 4.1
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   int myNumbers [5] = {34, 56, -21, 5002, 365};

   cout << "First element at index 0: " << myNumbers[0] << endl;
   cout << "Second element at index 1: " << myNumbers[1] << endl;
   cout << "Third element at index 2: " << myNumbers[2] << endl;
   cout << "Fourth element at index 3: " << myNumbers[3] << endl;
   cout << "Fifth element at index 4: " << myNumbers[4] << endl;

   return 0;
}
