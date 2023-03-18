/* Listing 23.2 Demonstartes the Usage of 'count()' to Determine Number
   of Elements with a Value and 'count_if()' to Determine Number of 
   Elements That Fulfill a Conditon

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// unary predicate for *_if functions
template <typename elementType>
bool IsEven (const elementType& number)
{
   return ((number % 2) == 0); // true, if even
}

int main()
{
   vector <int> numsInVec{ 2017, 0, -1, 42, 10101, 25 };

   size_t numZeroes = count (numsInVec.cbegin(), numsInVec.cend(), 0);
   cout << "Number of instances of '0': " << numZeroes << endl;

   size_t numEvenNums = count_if(numsInVec.cbegin(),
		                 numsInVec.cend(), IsEven <int>);

   cout << "Number of even elements: " << numEvenNums << endl;
   cout << "Number of odd elements: ";
   cout << numsInVec.size() - numEvenNums << endl;

   return 0;
}
