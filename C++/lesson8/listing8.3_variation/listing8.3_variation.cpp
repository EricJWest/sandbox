/* Listing 8.3, variation
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
   cout << "pointsToInt = " << pointsToInt << endl;
   cout << "*pointsToInt = " << *pointsToInt << endl;

   int catsAge = 30; // NOTE: catsAge == age
   pointsToInt = &catsAge;
   cout << "pointsToInt points to catsAge now" << endl;

   cout << "pointsToInt = " << pointsToInt << endl;
   cout << "*pointsToInt = " << *pointsToInt << endl;


   return 0;
}
