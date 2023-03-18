/* Listing 19.2: Inserting Elements in an STL 'set' and 'multiset'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <set>
#include <iostream>
using namespace std;

// used as a template parameter in set / multiset instantiation
template <typename T>
void DisplayContents(const T& container)
{
   for (auto element = container.cbegin();
        element != container.cend();
        ++element)
      cout << *element << ' ';

   cout << endl;
}

int main()
{
   // a simple set of integers
   set <int> setInts{ 202, 151, -999, -1 };
   setInts.insert(-1); // duplicate
   cout << "Contents of the set: " << endl;
   DisplayContents(setInts);
   cout << endl;

   // a simple multiset of integers
   multiset <int> msetInts;
   msetInts.insert(setInts.begin(), setInts.end());
   msetInts.insert(-1); // duplicate

   cout << "Contents of the multiset: " << endl;
   DisplayContents(msetInts);
   cout << endl;

   cout << "Number of instances of '-1' in the multiset are: '";
   cout << msetInts.count(-1) << "'" << endl;

   return 0;
}
