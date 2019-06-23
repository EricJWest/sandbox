/* Listing 8.19: Demonstrating the Use of 'const' to Prevent a Function From Modifying a Parameter Sent by Reference
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

void GetSquare(const int& number, int& result)
{
   result = number * number;

   // using the following fails, because a const value cannot be modified
   //number *= number;
}

int main()
{
   cout << "Enter a number that you wish to square: ";
   int number = 0;
   cin >> number;

   int square = 0;
   GetSquare(number, square);
   cout << number << "^2 = " << square << endl;

   return 0;
}
