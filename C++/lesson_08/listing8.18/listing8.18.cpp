/* Listing 8.18: Demonstrating the Use of References in a Function
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

void GetSquare(int& number)
{
   number *= number;
}

int main()
{
   cout << "Enter a number that you wish to square: ";
   int number = 0;
   cin >> number;

   GetSquare(number);
   cout << "Square is: " << number << endl;

   return 0;
}
