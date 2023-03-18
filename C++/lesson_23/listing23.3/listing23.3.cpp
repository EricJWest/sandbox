/* Listing 23.3 Finding a Range in a Collection Using 
   'search()' and 'search_n()'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void DisplayContents (const T& container)
{
   for (auto element = container.cbegin();
             element != container.cend();
	     ++element)
      cout << *element << ' ';

   cout << endl << endl;
}

int main()
{
   vector <int> numsInVec{ 2017, 0, -1, 42, 10101, 25, 9, 9, 9 };
   list <int> numsInList{ -1, 42, 10101 };

   cout << "The contents of the sample vector are: " << endl;
   DisplayContents(numsInVec);

   cout << "The contents of the sample list are: " << endl;
   DisplayContents(numsInList);

   cout << "search() for the contents of list in vector..." << endl;
   auto range = search (numsInVec.cbegin(), // start of search range
		        numsInVec.cend(), // end of search range
			numsInList.cbegin(), // start of search range
			numsInList.cend()); // end of search range

   // Check if search found a match
   if (range != numsInVec.cend())
   {
      cout << "Sequence in list found in vector at position: ";
      cout << distance(numsInVec.cbegin(), range) << endl << endl;
   }

   cout << "Searching {9, 9, 9} in vector using search_n()..." << endl;
   auto partialRange = search_n (numsInVec.cbegin(), // start range
		                 numsInVec.cend(), // end range
                                 3, // count of item to be searched for
				 9 ); // item to search for

   // Check if search found a match
   if (partialRange != numsInVec.cend())
   {
      cout << "Sequence {9, 9, 9} found in vector at position: ";
      cout << distance(numsInVec.cbegin(), partialRange) << endl << endl;
   }

   return 0;
}
