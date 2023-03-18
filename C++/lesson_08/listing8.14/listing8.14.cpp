/* Listing 8.14: Improved Version of Listing 8.13
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "Is it sunny (y/n)? ";
   char userInput = 'y';
   cin >> userInput;

   // declare pointer and initialized
   bool* const isSunny = new bool;
   *isSunny = false;


   if (userInput == 'y')
      *isSunny = true;

   cout << "Boolean flag sunny says: " << *isSunny << endl;

   // release valid memory
   delete isSunny;

   return 0;
}
