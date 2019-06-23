/* Listing 8.11: Demonstration That the Array Variable Is a Pointer to the First Element
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   // Static array of 5 integers
   int myNumbers[5] = {};

   // Array assigned to pointer to int
   int* pointToNums = myNumbers;

   // Display address contained in pointer
   cout << "pointToNums = " << pointToNums << endl;

   // Display address of first element of array
   cout << "&myNumbers[0] = " << &myNumbers << endl;

   return 0;
}
