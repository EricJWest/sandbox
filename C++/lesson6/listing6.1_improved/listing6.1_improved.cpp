/* Listing 6.1, Improved
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "Enter two integers" << endl;
   int num1 = 0, num2 = 0;

   cout << "First integer:  ";
   cin >> num1;

   cout << "Second integer: ";
   cin >> num2;

   cout << "Enter \'m\' to multiply, anything else to add: ";
   char userSelection = '\0';
   cin >> userSelection;

   int result = 0;
   if (userSelection == 'm')
   {
      result = num1 * num2;
      cout << "result is: " << num1 << " * " << num2 << " = " << result << endl;
   }
   else
   {
      result = num1 + num2;
      cout << "result is: " << num1 << " + " << num2 << " = " << result << endl;
   }

   return 0;
}
