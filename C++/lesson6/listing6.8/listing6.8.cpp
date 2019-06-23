/* Listing 6.8: Demonstrating the Use of a 'while' Loop
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   char userSelection = 'm'; // initial value

   while (userSelection != 'x')
   {
      cout << "Enter two integers: " << endl;
      int num1 = 0, num2 = 0;
      cin >> num1;
      cin >> num2;

      cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

      cout << "Press x to exit(x) or any other key to recalculate" << endl;
      cin >> userSelection;
   }

   cout << "Well, it was fun while it lasted. Goodbye!" << endl;

   return 0;
}
