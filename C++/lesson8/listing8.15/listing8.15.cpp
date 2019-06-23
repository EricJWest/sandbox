/* Listing 8.15: Demonstrating Graceful Exit When 'new' Throws an Exception
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

// remove the try-catch block to see this application crash
int main()
{
   try
   {
      // Request a LOT of memory!
      int* pointsToManyNums = new int [0x1ffffffffff];

      // Use the allocated memory

      // Release allocated memory
      delete[] pointsToManyNums;
   }
   catch (bad_alloc)
   {
      cout << "Memory allocation failed. Ending program" << endl;
   }

   return 0;
}
