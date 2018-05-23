/* Listing 3.6
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   auto coinFlippedHeads = true;
   auto largeNumber = 2500000000000;

   cout << "coinFlippedHeads = " << coinFlippedHeads;
   cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;
   cout << "largeNumber = " << largeNumber;
   cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;

   return 0;
}
