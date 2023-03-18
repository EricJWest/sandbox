/* Listing 18.4: Erasing Elements in a List Using 'erase()'
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
   // Instantiate a list of integers
   list <int> linkInts { 4, 3, 5, -1, 2017 };

   // Store an iterator obtained in using insert()
   auto val2 = linkInts.insert(linkInts.begin(), 2);

   cout << "Initial contents of the list: " << endl;
   DisplayContents(linkInts);
   cout << endl;

   linkInts.erase(val2);
   cout << "After erasing element '" << *val2 << "': " << endl;
   DisplayContents(linkInts);
   cout << endl;

   linkInts.erase(linkInts.begin(), linkInts.end());;
   cout << "Number of elements after erasing range: " << endl;
   cout << linkInts.size() << endl;

   return 0;
}
