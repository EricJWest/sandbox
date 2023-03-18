/* Listing 23.8 Demonstrates 'copy()', 'copy_if()', 
   'remove()' and 'remove_if()' to Copy a 'list' into a 'vector',
   Remove 0's and Even Numbers

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

template <typename T>
void DisplayContents(const T& container)
{
   for (auto element = container.cbegin();
	     element != container.cend();
	     ++element)
      cout << *element << ' ';
   
   cout << "| Number of elements: " << container.size() << endl;
}

int main()
{
   list <int> numsInList{ 2017, 0, -1, 42, 10101, 25 };
   cout << "Source (list) contains: " << endl;
   DisplayContents(numsInList);

   // Initialize vector to hold 2x elements as the list
   vector <int> numsInVec (numsInList.size() * 2);

   auto lastElement = copy (numsInList.cbegin(), // start source range
		            numsInList.cend(),   // end source range
			    numsInVec.begin() ); // start dest range

   // Copy odd numbers from list into vector
   copy_if (numsInList.cbegin(),
	    numsInList.cend(),
	    lastElement,
	    [] (int element) {return ((element % 2) != 0);} );

   cout << "Destination (vector) after copy() and copy_if(): " << endl;
   DisplayContents(numsInVec);

   // Remove all instances of '0', resize vector using erase()
   auto newEnd = remove (numsInVec.begin(),
		         numsInVec.end(), 0);
   numsInVec.erase(newEnd, numsInVec.end());

   // Remove all odd numbers from the vector using remove_if()
   newEnd = remove_if (numsInVec.begin(),
		       numsInVec.end(),
		       [] (int element) {return ((element % 2) != 0);} );

   numsInVec.erase(newEnd, numsInVec.end()); // resizing

   cout << "Destination (vector) after remove(), remove_if(), and erase(): ";
   cout << endl;
   DisplayContents(numsInVec);

   return 0;
}
