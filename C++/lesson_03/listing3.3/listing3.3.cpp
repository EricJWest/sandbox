/* Listing 3.3: Using Global Variables
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

// three global integers
int firstNumber = 0;
int secondNumber = 0;
int multiplicationResult = 0;

void MultiplyNumbers ()
{
   cout << "Enter the first number: ";
   cin >> firstNumber;

   cout << "Enter the second number: ";
   cin >> secondNumber;

   // Multiply the two numbers, store the result in a variable
   multiplicationResult = firstNumber * secondNumber;

   // Display the result
   cout << "Displaying from MultiplyNumbers(): ";
   cout << firstNumber << " x " << secondNumber;
   cout << " = " << multiplicationResult << endl;
}

int main ()
{
   cout << "This program will help you multiply two numbers" << endl;

   // Call the function that multiplies the two numbers
   MultiplyNumbers();

   cout << "Displaying from main(): ";

   // This line will now comile and work!
   cout << firstNumber << " x " << secondNumber;
   cout << " = " << multiplicationResult << endl;

   return 0;
}
