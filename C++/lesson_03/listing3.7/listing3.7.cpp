/* Listing 3.7: Declaring a Constant Called 'pi'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>

int main()
{
   using namespace std;

   const double pi = 22.0 / 7;
   cout << "The value of pi is: " << pi << endl;

   // Uncommenting the next line leads to a compile-time error
   // pi = 345;

   return 0;
}
