/* Listing 5.1: Demonstrating the Use of Arithmetic Operators on Integers
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "Enter two integers: " << endl;
   int num1 = 0, num2 = 0;
   cin >> num1;
   cin >> num2;

   cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
   cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
   cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
   cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
   cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

   return 0;
}
