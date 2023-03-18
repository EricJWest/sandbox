/* Listing 20.6 STL Hash Table Implementation 'unordered_map'
   Using 'max_bucket_count()', 'load_factor()', and 'max_load()' 
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

template <typename T1, typename T2>
void DisplayUnorderedMap(unordered_map <T1, T2>& cont)
{
   cout << "Unordered map contains: " << endl;
   for (auto element = cont.begin();
	     element != cont.end();
	     ++element )
      cout << element->first << " -> " << element->second << endl;
      cout << "Number of pairs: " << cont.size() << endl;
      cout << "Bucket count: " << cont.bucket_count() << endl;
      cout << "Current load factor: " << cont.load_factor() << endl;
      cout << "Max load factor: " << cont.max_load_factor() << endl;
      cout << endl;
}

int main()
{
   unordered_map <int, string> umapIntToStr;

   umapIntToStr.insert(make_pair(1, "Uno"));
   umapIntToStr.insert(make_pair(45, "Cuarenta y Cinco"));
   umapIntToStr.insert(make_pair(1001, "Un Mil Uno"));
   umapIntToStr.insert(make_pair(-2, "Menos Dos"));
   umapIntToStr.insert(make_pair(-1000, "Menos Un Mil"));
   umapIntToStr.insert(make_pair(100, "Cien"));
   umapIntToStr.insert(make_pair(12, "Doce"));
   umapIntToStr.insert(make_pair(-100, "Menos Cien"));

   DisplayUnorderedMap <int, string> (umapIntToStr);

   cout << "Inserting one more element..." << endl << endl;
   umapIntToStr.insert(make_pair(300, "Tres Ciento"));
   DisplayUnorderedMap <int, string> (umapIntToStr);

   cout << "Enter key to find for: ";
   int key = 0;
   cin >> key;

   auto element = umapIntToStr.find(key);
   if (element != umapIntToStr.end())
      cout << "Found! Key pairs with value " << element->second << endl;
   else
      cout << "Key has no corresponding pair value!" << endl;

   return 0;
}
