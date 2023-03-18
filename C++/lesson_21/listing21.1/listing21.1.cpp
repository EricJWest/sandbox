/* Listing 21.1 Displaying the Contents of a Collection Using a Unary Function
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

// struct that behaves as a unary funtion
template <typename elementType>
struct DisplayElement
{
   void operator () (const elementType& element) const
   {
      cout << element << ' ';
   }
};

int main()
{
   vector <int> numsInVect{ 0, 1, 2, 3, -1, -9, 0, -999 };
   cout << "Vector of integers contains: " << endl;
   
   for_each (numsInVect.begin(),      // start of range
	     numsInVect.end(),        // end of range
	     DisplayElement<int>() ); // unary function object
   
   cout << endl << endl;

   // Display the list of characters
   list <char> charsInList{ 'a', 'z', 'k', 'd' };
   cout << "List of characters contains: " << endl;
   
   for_each (charsInList.begin(),      // start of range
	     charsInList.end(),        // end of range
	     DisplayElement<char>() ); // unary function object
   
   cout << endl;

   return 0;
}
