/* Listing 23.12 Using 'lower_bound()' and 'upper_bound()'
   to Insert in a Sorted Collection

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;

template <typename T>
void DisplayContents(const T& container)
{
   for (auto element = container.cbegin();
	     element != container.cend();
	     ++element)
      cout << *element << endl;
}

int main()
{
   list <string> names{"Einstein", "Bohr", "Dirac", "heisenberg", "curie"};

   cout << "Sorted contents of the list are: " << endl;
   names.sort();
   DisplayContents(names);

   cout << "Lowest index where \"Dirac\" can be inserted is: ";
   auto minPos = lower_bound (names.begin(), names.end(), "Dirac");
   cout << distance (names.begin(), minPos) << endl;

   cout << "Highest index where \"Dirac\" can be inserted is: ";
   auto maxPos = upper_bound (names.begin(), names.end(), "Dirac");
   cout << distance (names.begin(), maxPos) << endl;

   cout << endl;

   cout << "List after inserting Dirac in sorted order: " << endl;
   names.insert(minPos, "Dirac");
   DisplayContents(names);

   return 0;
}
