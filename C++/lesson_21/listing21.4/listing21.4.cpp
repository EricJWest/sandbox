/* Listing 21.4 Unary Predicate 'IsMultiple' Used with 'find_if()'
   to Find an Element in a 'vector' That is a Multiple of a 
   User-Supplied Divisor

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// A structure as a unary predicate
template <typename numType>
struct IsMultiple
{
   numType Divisor;

   IsMultiple (const numType& divisor)
   {
      Divisor = divisor;
   } 

   bool operator () (const numType& element) const
   {
      // Check if the divisor is a multiple of the divisor
      return ((element % Divisor) == 0);
   }
};

int main()
{
   vector <int> numsInVect{ 25, 26, 27, 28, 29, 30, 31 };
   cout << "Vector of integers contains: 25, 26, 27, 28, 29, 30, 31 " << endl;
   
   cout << "Enter divisor (> 0): ";
   int divisor = 2;
   cin >> divisor;

   // Find the first element that is a multiple of divisor
   auto element = find_if( numsInVect.begin(),
		           numsInVect.end(),
			   IsMultiple<int>(divisor) );

   if (element != numsInVect.end())
   {
      cout << "First element in vector divisible by " << divisor;
      cout << ": " << *element << endl;
   }

   return 0;
}
