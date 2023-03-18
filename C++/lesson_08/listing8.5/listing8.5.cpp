/* Listing 8.5: Manipulating Data Using a Pointer and the Dereferencing Operator (*)
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   int catsAge = 30;
   cout << "Initialized catsAge = " << catsAge << endl;

   int* pointsToAnAge = &catsAge;
   cout << "pointsToAnAge points to catsAge" << endl;

   cout << "Enter an age for your cat: ";

   // store input at the memory pointed to by pointsToAnAge
   cin >> *pointsToAnAge;

   // Display the address where age is stored
   cout << "Input stored at " << hex << pointsToAnAge << endl;

   cout << "Integer catsAge = " << dec << catsAge << endl;

   return 0;
}
