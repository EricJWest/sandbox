/* Listing 23.10 Using 'sort()', 'binary_search()',
   and 'unique()'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
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
   vector <string> vecNames{"Einstein", "bohr", "Heisenberg", "dirac"};

   // Insert a duplicate
   vecNames.push_back("bohr");
   
   cout << "The initial contents of the vector are: " << endl;
   DisplayContents(vecNames);

   cout << "the sorted vector contains names in order: " << endl;
   sort (vecNames.begin(), vecNames.end());
   DisplayContents(vecNames);

   cout << "Searching for \"Einstein\" using 'binary_search()': " << endl;
   bool elementFound = binary_search (vecNames.begin(), 
		                      vecNames.end(), 
				      "Einstein");

   if (elementFound)
      cout << "Result: \"Einstein\" was found in the vector!" << endl;
   else
      cout << "Element not found" << endl;

   // Erase adjacent duplicates
   auto newEnd = unique (vecNames.begin(), vecNames.end());
   vecNames.erase (newEnd, vecNames.end());

   cout << "The contents of the vector after using 'unique()': " << endl;
   DisplayContents(vecNames);

   return 0;
}
