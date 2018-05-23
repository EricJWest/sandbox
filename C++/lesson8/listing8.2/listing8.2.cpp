/* Listing 8.2
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   int age = 30;
   int* pointsToInt = &age; // pointer initialized to &age

   // Displaying the value of pointer
   //cout << "Integer age is located at: 0x" << hex << pointsToInt << endl;
   cout << "Integer age is located at: " << pointsToInt << endl;

   return 0;
}
