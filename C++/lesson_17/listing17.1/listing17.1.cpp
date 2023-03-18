/* Listing 17.1: Different Forms of Instantiating 'std::vector'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <vector>

int main()
{
   // vector of integers
   std::vector<int> integers;

   // vector initialized using C++11 list initialization
   std::vector<int> initVector{ 202, 2017, -1 };

   // Instantiate a vector with 10 elemnets (it can still grow)
   std::vector<int> tenElements (10);

   // Instantiate a vetor with 10 elements, each initialized to 90
   std::vector<int> tenElemInit (10, 90);

   // Initialize vector to the contents of another
   std::vector<int> copyVector (tenElemInit);

   // Vector initialized to 5 elements from another using iterators
   std::vector<int> partialCopy (tenElements.cbegin(), tenElements.cbegin() + 5);

   return 0;
}
