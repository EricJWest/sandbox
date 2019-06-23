/* Lesson 6, Exercise 1
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   const int ARRAY_LEN = 5;
   float myArray[] = {3.5, -62, 2.74, 1.10, -3.14};

   for (int i = ARRAY_LEN-1 ; i > -1 ; --i)
      cout << "myArray[" << i << "] = " << myArray[i] << endl;

   return 0;
}
