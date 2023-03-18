/* Listing 28.2 Catchin Exceptions of Type 'std::bad_alloc'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <exception> // include this to catch exception bad_alloc
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
   
   catch (std::bad_alloc& exp)
   {
      cout << "Exception encountered: " << exp.what() << endl;
      cout << "Got to end, sorry!" << endl;
   }
   catch(...)
   {
      cout << "Exception encountered. Got to end, sorry!" << endl;
   }

   return 0;
}
