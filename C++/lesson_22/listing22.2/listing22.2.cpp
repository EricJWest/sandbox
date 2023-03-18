/* Listing 22.2 Find an Even Number in a Collection Using a 
   Lambda Expression for a Unary Predicate and Algorithm 'find_if()'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   vector <int> numsInVect{ 25, 101, 2017, -50 };

   auto evenNum = find_if(numsInVect.cbegin(),
	                  numsInVect.cend(),
             [] (const int& num) {return ((num % 2) == 0); } ); 

   if (evenNum != numsInVect.cend())
      cout << "Even number in collection is: " << *evenNum << endl;

   return 0;
}
