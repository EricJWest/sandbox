/* Listing 17.5: Accessing Elements in a Vector Using Pointer Semantics (Iterators)
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector <int> integers{50, 1, 987, 1001 };

   vector<int>::const_iterator element = integers.cbegin();
   // auto element = integers.cbegin(); // auto type deduction

   while (element != integers.end())
   {
      size_t index = distance (integers.cbegin(), element);
      cout << "Element at position ";
      cout << index << " is: " << *element << endl;

      // move to the next element
      ++element;
   }

   return 0;
}
