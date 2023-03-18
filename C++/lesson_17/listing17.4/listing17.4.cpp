/* Listing 17.4: Accessing Elements in a Vector Using Array Semantics
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector <int> integers{50, 1, 987, 1001 };

   for (size_t index = 0; index < integers.size(); ++index)
   {
      cout << "Element[" << index << "] = ";
      cout << integers[index] << endl;
   }
   cout << endl;

   integers[2] = 2011; // change value of 3rd element
   cout << "After replacement: " << endl;
   cout << "Element[2] = " << integers[2] << endl;

   return 0;
}
