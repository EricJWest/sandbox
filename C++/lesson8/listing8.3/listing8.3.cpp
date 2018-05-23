/* Listing 8.3
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   int age = 30;

   int* pointsToInt = &age;
   cout << "pointsToInt points to age now" << endl;

   // Displaying the value of pointer
   //cout << "pointsToInt = 0x" << hex << pointsToInt << endl;
   cout << "pointsToInt = " << pointsToInt << endl;

   int catsAge = 9;
   pointsToInt = &catsAge;
   cout << "pointsToInt points to catsAge now" << endl;

   //cout << "pointsToInt = 0x" << hex << pointsToInt << endl;
   cout << "pointsToInt = " << pointsToInt << endl;

   return 0;
}
