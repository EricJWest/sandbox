/* Listing 3.2
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

void MultiplyNumbers ()
{
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
}

int main()
{
   cout << "This program will help you multiply two numbers" << endl;

   // Call the function that multiplies the two numbers
   MultiplyNumbers();

   // If uncommented, these lines lead to compile-time errors
   //cout << firstNumber << " x " << secondNumber;
   //cout << " = " << multiplicationResult << endl;

   return 0;
}
