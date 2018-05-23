/* Listing 8.8
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "How many integers shall I reserve memory for?" << endl;
   int numEntries = 0;
   cin >> numEntries;

   int* myNumbers = new int[numEntries];

   //cout << "Memory allocated at: 0x" << myNumbers << hex << endl;
   cout << "Memory allocated at: " << myNumbers << endl;

   // de-allocate before exiting
   delete[] myNumbers;

   return 0;
}
