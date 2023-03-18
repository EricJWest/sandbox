/* Listing 18.8 Basic Insertion and Removal Operations on a 'std::forward_list'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <forward_list>
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
   // Instantiate a forward_list of integers
   forward_list <int> flistInts { 3, 4, 2, 2, 0 };
   flistInts.push_front(1);

   cout << "Contents of forward_list: " << endl;
   DisplayContents(flistInts);
   cout << endl;

   flistInts.remove(2);
   flistInts.sort();
   cout << "Contents after removing 2 and sorting: " << endl;
   DisplayContents(flistInts);

   return 0;
}
