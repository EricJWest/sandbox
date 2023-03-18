/* Lesson 8, Exercise 4
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   // allocate memory
   int* pointToAnInt = new int;

   // do something
   //pointToAnInt = 9; // no!
   *pointToAnInt = 9; // yes!
   cout << "The value at pointToAnInt: " << *pointToAnInt << endl;

   // remove memory
   delete pointToAnInt;

   return 0;
}
