/* Lesson 3, Exercise 2
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>

int main()
{
   using namespace std;
   cout << "Computing the size of some C++ variable types" << endl;

   cout << "Size of int: " << sizeof(int) << endl;
   cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
   cout << "Size of long int: " << sizeof(long) << endl;

   cout << endl;
   cout << "Therefore the size of an unsigned integer is the same" << endl;
   cout << "as the size of a normal integer, but both are smaller" << endl;
   cout << "than a long integer." << endl;

   return 0;
}
