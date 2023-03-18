/* Listing 18.2: Inserting Elements in a List Using 'push_front()' and 'push_back()'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <list>
#include <iostream>
using namespace std;

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
   std::list <int> linkInts{ -101, 42 };

   linkInts.push_front (10);
   linkInts.push_front (2011);
   linkInts.push_back (-1);
   linkInts.push_back (9999);

   DisplayContents(linkInts);

   return 0;
}
