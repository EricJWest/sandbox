/* Listing 8.12
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   const int ARRAY_LEN = 5;

   // Static array of 5 integers
   int myNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};

   // pointer initialized to first element in array
   int* pointToNums = myNumbers;

   cout << "Display elements using array with pointer syntax, operator *" << endl;
   for (int index = 0; index < ARRAY_LEN; ++index)
      cout << "Element " << index << " = " << *(myNumbers + index) << endl;

   cout << "Display elements using pointer with array sytax, operator []" << endl;
   for (int index = 0; index < ARRAY_LEN; ++index)
      cout << "Element " << index << " = " << pointToNums[index] << endl;

   return 0;
}
