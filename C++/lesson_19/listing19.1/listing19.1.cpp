/* Listing 19.1: Different Forms of Instantiating 'std::set' and 'std::multiset'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <set>
using namespace std;

// used as a template parameter in set / multiset instantiation
template <typename T>
struct SortDescending
{
   bool operator() (const T& lhs, const T& rhs) const
   {
      return ( lhs > rhs );
   }
};

int main()
{
   // a simple set or multiset of integers (using default sort predicate)
   set <int> setInts1;
   multiset <int> msetInts1;

   // set and multiset instantiated given a user-defined sort predicate
   set <int, SortDescending<int>> setInts2;
   multiset <int, SortDescending<int>> msetInts2;

   // creating one set from another, or part of another container
   set <int> setInts3(setInts1);
   multiset<int> msetInts3(setInts1.cbegin(), setInts1.cend());

   return 0;
}
