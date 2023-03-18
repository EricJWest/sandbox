/* Listing 8.16:
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   // Request a LOT of memory, use nothrow
   int* pointsToManyNums = new(nothrow) int [0x1ffffffffff];

   if (pointsToManyNums) // check pointsToManyNums != NULL
   {
      // Use the allocated memory

      // Release allocated memory
      delete[] pointsToManyNums;
   }
   else
      cout << "Memory allocation failed. Ending program" << endl;

   return 0;
}
