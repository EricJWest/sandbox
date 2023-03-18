/* Listing 28.1 Using 'try' and 'catch' in Ensuring Exception
   Safety in Memory Allocation

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "Enter number of integers you wish to reserve: ";

   try
   {
      int input = 0;
      cin >> input;

      // Request memory spaceand then return it
      int* numArray = new int [input];
      delete[] numArray;
   }
   
   catch (...)
   {
      cout << "Exception occured. Got to end, sorry!" << endl;
   }

   return 0;
}
