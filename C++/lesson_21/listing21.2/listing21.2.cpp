/* Listing 21.2 Function Object That Holds State 
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename elementType>
struct DisplayElementKeepCount
{
   int count;

   DisplayElementKeepCount() : count(0) {} // constructor

   void operator () (const elementType& element)
   {
      ++count;
      cout << element << ' ';
   }
};

int main()
{
   vector <int> numsInVect{ 22, 2017, -1, 999, 43, 901 };
   cout << "Vector of integers contains: " << endl;
   
   DisplayElementKeepCount<int> result;
   result = for_each (numsInVect.begin(),
	              numsInVect.end(),
	              DisplayElementKeepCount<int>() );
   
   cout << endl;
   cout << "Functor invoked " << result.count << " times" << endl;

   return 0;
}
