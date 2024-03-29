/* Listing 20.1 Instantiating 'map' and 'multimap' Objects That Map an 'int' Key
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <map>
#include <string>
using namespace std;

template <typename keyType>
struct ReverseSort
{
   bool operator() (const keyType& key1, const keyType& key2)
   {
      return (key1 > key2);
   }
};

int main()
{
   // map and multimap key of type int to value of type string
   map <int, string> mapIntToStr1;
   multimap <int, string> mmapIntToStr1;

   // map and multimap constructed as a copy of another
   map <int, string> mapIntToStr2(mapIntToStr1);
   multimap <int, string> mmapIntToStr2(mmapIntToStr1);

   // map and multimap constructed given a part of another map or multimap
   map <int, string> mapIntToStr3(mapIntToStr1.cbegin(), 
		                  mapIntToStr1.cend());
   multimap <int, string> mmapIntToStr3(mmapIntToStr1.cbegin(),
		                        mmapIntToStr1.cend());

   // map and multimap with a predicate that inverse sort order
   map <int, string, ReverseSort<int>> mapIntToStr4
	                               (mapIntToStr1.cbegin(), 
                                        mapIntToStr1.cend());
   multimap <int, string, ReverseSort<int>> mmapIntToStr4
	                                    (mmapIntToStr1.cbegin(), 
                                             mmapIntToStr1.cend());

   return 0;
}
