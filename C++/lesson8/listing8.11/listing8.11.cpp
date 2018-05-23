/* Listing 8.11
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   // Static array of 5 integers
   int myNumbers[5] = {};

   // array assigned to pointer to int
   int* pointToNums = myNumbers;

   // Display address contained in pointer
   //cout << "pointToNums = 0x" << hex << pointToNums << endl;
   cout << "pointToNums = " << pointToNums << endl;

   // Address of first element of array
   //cout << "&myNumbers[0] = 0x" << hex << &myNumbers << endl;
   cout << "&myNumbers[0] = " << &myNumbers << endl;

   return 0;
}
