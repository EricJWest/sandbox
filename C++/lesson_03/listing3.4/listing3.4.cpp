/* Listing 3.4: Demonstrating the Ill-Effects of Singed and Unsigned Integer Overflow Errors
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   unsigned short uShortValue = 65535;
   cout << "Incrementing unsigned short " << uShortValue << " gives: ";
   cout << ++uShortValue << endl;

   short signedShort = 32767;
   cout << "Incrementing signed short " << signedShort << " gives: ";
   cout << ++signedShort << endl;

   return 0;
}
