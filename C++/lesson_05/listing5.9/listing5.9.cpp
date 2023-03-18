/* Listing 5.9: Demonstrating the Use of Compound Assignment Operators
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "Enter a number: ";
   int value = 0;
   cin >> value;

   cout << "Start, value = " << value << endl;
   cout << "After += 8, value = " << (value += 8) << endl;
   cout << "After -= 2, value = " << (value -= 2) << endl;
   cout << "After /= 4, value = " << (value /= 4) << endl;
   cout << "After *= 4, value = " << (value *= 4) << endl;
   cout << "After %= 1000, value = " << (value %= 1000) << endl;
   cout << "After <<= 1, value = " << (value <<= 1) << endl;
   cout << "After >>= 2, value = " << (value >>= 2) << endl;
   cout << "After |= 0x55, value = " << (value |= 0x55) << endl;
   cout << "After ^= 0x55, value = " << (value ^= 0x55) << endl;
   cout << "After &= 0x0F, value = " << (value &= 0x0F) << endl;

   return 0;
}
