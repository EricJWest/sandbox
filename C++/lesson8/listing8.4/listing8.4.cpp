/* Listing 8.4
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   int age = 30;
   int catsAge = 9;

   cout << "Integer age = " << age << endl;
   cout << "Integer catsAge = " << catsAge << endl;

   int* pointsToInt = &age;
   cout << "pointsToInt points to age" << endl;

   // Displaying the value of pointer
   //cout << "pointsToInt = 0x" << hex << pointsToInt << endl;
   cout << "pointsToInt = " << pointsToInt << endl;

   // Displaying the value at the pointed location
   //cout << "*pointsToInt = 0x" << hex << *pointsToInt << endl;
   cout << "*pointsToInt = " << *pointsToInt << endl;

   pointsToInt = &catsAge;
   cout << "pointsToAge points to catsAge now" << endl;

   //cout << "pointsToInt = 0x" << hex << pointsToInt << endl;
   //cout << "*pointsToInt = 0x" << hex << *pointsToInt << endl;
   cout << "pointsToInt = " << pointsToInt << endl;
   cout << "*pointsToInt = " << *pointsToInt << endl;

   return 0;
}
