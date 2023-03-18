/* Listing 18.5 Reversing Elements in a List Using 'reverse()'
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
   list <int> linkInts { 0, 1, 2, 3, 4, 5 };

   cout << "Initial contents of the list: " << endl;
   DisplayContents(linkInts);
   cout << endl;

   linkInts.reverse();

   cout << "Contents of list after using reverse(): " << endl;
   DisplayContents(linkInts);

   return 0;
}
