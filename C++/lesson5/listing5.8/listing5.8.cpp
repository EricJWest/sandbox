/* Listing 5.8: Demonstrating the Use of Bitwise Right Shift (>>) and Bitwise Left Shift (<<) Operators
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "Enter a number: ";
   int inputNum = 0;
   cin >> inputNum;

   int halfNum = inputNum >> 1;
   int quarterNum = inputNum >> 2;
   int doubleNum = inputNum << 1;
   int quadrupleNum = inputNum << 2;

   cout << "Quarter: " << quarterNum << endl;
   cout << "Half: " << halfNum << endl;
   cout << "Double: " << doubleNum << endl;
   cout << "Quadruple: " << quadrupleNum << endl;

   return 0;
}
