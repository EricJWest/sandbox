/* Listing 7.10: An Inline Function
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

// define an inline function that doubles
inline long DoubleNum(int inputNum)
{
   return inputNum * 2;
}

int main()
{
   cout << "Enter an integer: ";
   int inputNum = 0;
   cin >> inputNum;

   // Call inline function
   cout << "Double is: " << DoubleNum(inputNum) << endl;

   return 0;
}
