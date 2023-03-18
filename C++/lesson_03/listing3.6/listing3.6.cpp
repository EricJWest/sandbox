/* Listing 3.6: Using the 'auto' Keyword and Relying on the Compiler's Type-Inference Capabilities
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
