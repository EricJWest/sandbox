/* Listing 8.19
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

void GetSquare(const int& number, int& result)
{
   result = number * number;
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
