/* Listing 8.13: Demonstrating Poor Pointer Hygiene
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   // uninitialized pointer (bad)
   bool* isSunny; // BAD

   cout << "Is it sunny (y/n)? ";
   char userInput = 'y';
   cin >> userInput;

   if (userInput == 'y')
   {
      isSunny = new bool;
      *isSunny = true;
   }

   // isSunny contains invalid value if user entered 'n'
   cout << "Boolean flag sunny says: " << *isSunny << endl;

   // delete being invoked also when new wasn't
   delete isSunny;

   return 0;
}
