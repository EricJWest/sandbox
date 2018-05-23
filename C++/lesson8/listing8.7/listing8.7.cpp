/* Listing 8.7
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   // Request for memory space for an int
   int* pointsToAnAge = new int;

   // Use the allocated memory to store a number
   cout << "Enter your cat's age: ";
   cin >> *pointsToAnAge;

   // use indirection operator * to access value
   //cout << "Age " << *pointsToAnAge << " is stored at 0x" << hex << pointsToAnAge << endl;
   cout << "Age " << *pointsToAnAge << " is stored at " << pointsToAnAge << endl;

   delete pointsToAnAge; // release memory

   return 0;
}
