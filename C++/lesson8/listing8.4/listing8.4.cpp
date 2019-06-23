/* Listing 8.4: Demonstrating the Use of the Dereferencing Operator (*), a.k.a. the Indirection Operator
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
   cout << endl;

   int* pointsToInt = &age;
   cout << "pointsToInt points to age" << endl;

   // Displaying the value of pointer
   cout << "pointsToInt = " << hex << pointsToInt << endl;

   // Displaying the value at the pointed location
   cout << "*pointsToInt = " << dec << *pointsToInt << endl;

   cout << endl;

   pointsToInt = &catsAge;
   cout << "pointsToAge points to catsAge now" << endl;

   // Displaying the value of pointer
   cout << "pointsToInt = " << hex << pointsToInt << endl;

   // Displaying the value at the pointed location
   cout << "*pointsToInt = " << dec << *pointsToInt << endl;

   return 0;
}
