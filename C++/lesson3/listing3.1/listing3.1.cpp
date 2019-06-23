/* Listing 3.1: Using Variables to Store Numbers and the Result of Their Multiplication
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "This program will help you multiply two numbers" << endl;

   cout << "Enter the first number: ";
   int firstNumber = 0;
   cin >> firstNumber;

   cout << "Enter the second number: ";
   int secondNumber = 0;
   cin >> secondNumber;

   // Multiply the two numbers, store the result in a variable
   int multiplicationResult = firstNumber * secondNumber;

   // Display the result
   cout << firstNumber << " x " << secondNumber;
   cout << " = " << multiplicationResult << endl;

   return 0;
}
