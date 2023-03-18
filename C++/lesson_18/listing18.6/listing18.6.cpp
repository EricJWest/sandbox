/* Listing 18.6 Sorting a List of Integers in Ascending and Descending Order Using 'sort()'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <list>
#include <iostream>
using namespace std;

bool SortPredicate_Descending (const int& lhs, const int& rhs)
{
   // define criteria for list::sort: return true for desired order
   return (lhs > rhs);
}

template <typename T>
void DisplayContents (const T& container)
{
   for (auto element = container.cbegin();
        element != container.cend();
        ++element)
      cout << *element << ' ';
   cout << endl;
}

int main()
{
   // Instantiate a list of integers
   list <int> linkInts { 0, -1, 2011, 444, -5 };

   cout << "Initial contents of the list: " << endl;
   DisplayContents(linkInts);
   cout << endl;

   linkInts.sort();

   cout << "Order after using sort(): " << endl;
   DisplayContents(linkInts);
   cout << endl;

   linkInts.sort(SortPredicate_Descending);

   cout << "Order after using sort() with a predicate: " << endl;
   DisplayContents(linkInts);

   return 0;
}
