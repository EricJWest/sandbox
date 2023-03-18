/* Listing 19.3: Using the 'find()' Member Function
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <set>
#include <iostream>
using namespace std;

int main()
{
   // a simple set of integers
   set <int> setInts{ 43, 78, -1, 124 };

   // Display contents of the set to the screen
   for (auto element = setInts.cbegin();
        element != setInts.cend();
        ++element)
      cout << *element << endl;

   // Try finding an element
   auto elementFound = setInts.find(-1);

   // Check if found...
   if (elementFound != setInts.end())
      cout << "Element " << *elementFound << " found!" << endl << endl;
   else
      cout << "Element not found in set!" << endl << endl;

   // finding another...
   auto anotherFind = setInts.find(12345);

   // Check if found
   if (anotherFind != setInts.end())
      cout << "Element " << *anotherFind << " found!" << endl;
   else
      cout << "Element not found in set!" << endl;

   return 0;
}
