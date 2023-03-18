/* Listing 23.1 Using 'find()' to Locate an Integer Value in a 'vector',
   'find_if()' to Locate the First Even Number Given an Unary Predicate
   in a Lambda Expression

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   vector <int> numsInVec{ 2017, 0, -1, 42, 10101, 25 };

   cout << "Enter number to find in collection: " ;
   int numToFind = 0;
   cin >> numToFind;

   auto element = find (numsInVec.cbegin(),
		        numsInVec.cend(),
			numToFind);

   // Check if find succeeded
   if (element != numsInVec.cend())
      cout << "Value " << *element << " found!" << endl;
   else
      cout << "No element contains value " << numToFind << endl;

   cout << "Finding the first even number using find_if(): " << endl;

   auto evenNum = find_if (numsInVec.cbegin(),
		          numsInVec.cend(),
		[] (int element) { return (element % 2) == 0; } );
   
   if (evenNum != numsInVec.cend())
   {
      cout << "Number '" << *evenNum << "' found at position [";
      cout << distance(numsInVec.cbegin(), evenNum) << "]" << endl;
   }

   return 0;
}
