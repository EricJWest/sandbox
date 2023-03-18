/* Listing 27.5 Inserting Into a 'char' Buffer 
   Without Exceeding Its Bounds

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "Enter a line: ";
   char charBuf[10] = {0};
   cin.get(charBuf, 9);
   cout << "charBuf: " << charBuf << endl;

   return 0;
}
