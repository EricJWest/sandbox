/* Lesson 8, Exercise 5
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   // allocate memory
   int pointToAnInt = new int; // No! Cannot allocate new memory to an int
   //int* pointToAnInt = new int; // corrected

   // do something
   int* pNumberCopy = pointToAnInt;
   *pNumberCopy = 30;
   cout << "The value at pointToAnInt: " << *pointToAnInt << endl;

   // remove memory
   delete pNumberCopy; // No! This invalidates pointToAnInt
   delete pointToAnInt; // Correct: remove either one of these delete lines

   return 0;
}
