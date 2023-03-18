/* Listing 22.1 Displaying Elements in a Container via Algorithm 'for_each()' 
   That is Invoked with a Lambda Expression Instead of a Function Object

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main()
{
   vector <int> numsInVect{ 101, -4, 500, 21, 42, -1 };

   list <char> charsInList{ 'a', 'h', 'z', 'k', 'l' };
   
   // Display the array of integers
   cout << "Display elements in a vector using a lambda: " << endl;
   for_each (numsInVect.begin(),      // start of range
	     numsInVect.end(),        // end of range
             [] (const int& element) {cout << element << ' ';} ); // lambda
   cout << endl << endl;


   // Display the list of characters
   cout << "Display elements in a list using a lambda: " << endl;
   for_each (charsInList.begin(),      // start of range
	     charsInList.end(),        // end of range
             [] (auto& element) {cout << element << ' ';} ); // lambda
   cout << endl;

   return 0;
}
