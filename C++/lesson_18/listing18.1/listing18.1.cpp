/* Listing 18.1: Different Forms of Instantiating 'std::list'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <list>
#include <vector>
using namespace std;

int main()
{

   // instantiate an empty list
   std::list<int> linkInts;

   // instantiate a list with 10 integers
   std::list<int> listWith10Integers(10);

   // instantiate a list with 4 integers, each value 99
   std::list<int> listWith4IntegersEach99 (10, 99);

   // create an exact copy of an existing list
   std::list<int> listCopyAnother (listWith4IntegersEach99);

   // a vector with 10 integers, each 2017
   std::vector<int> vecIntegers (10, 2017);

   // instantiate a list using values from another container
   std::list<int> listContainsCopyOfAnother(vecIntegers.cbegin(), vecIntegers.cend());

   return 0;
}
