/* Listing 19.6: Uses of an STL 'unordered_set'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <unordered_set>
#include <iostream>
using namespace std;

template <typename T>
void DisplayContents (const T& container)
{
   cout << "Unordered set contains: ";
   for (auto element = container.cbegin();
        element != container.cend();
        ++element)
      cout << *element << ' ';

   cout << endl;

   cout << "Number of elemenets, size() = " << container.size() << endl;
   cout << "Bucket count = " << container.bucket_count() << endl;
   cout << "Max load factor = " << container.max_load_factor() << endl;
   cout << "Load factor: " << container.load_factor() << endl << endl;
}

int main()
{
   unordered_set<int> usetInt{ 1, -3, 2017, 300, -1, 989, -300, 9 };
   DisplayContents(usetInt);
   usetInt.insert(999);
   DisplayContents(usetInt);

   cout << "Enter into you want to check for existence in set: ";
   int input = 0;
   cin >> input;
   auto elementFound = usetInt.find(input);

   if (elementFound != usetInt.end())
      cout << *elementFound << " found in set" << endl;
   else
      cout << input << " not available in set" << endl;

   return 0;
}
