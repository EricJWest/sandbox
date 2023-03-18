/* Listing 23.6 Displaying the Contents of Sequences Using 'for_each()'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

template <typename elementType>
struct DisplayElementKeepCount
{
   int count;
   DisplayElementKeepCount(): count (0) {}

   void operator () (const elementType& element)
   {
      ++count;
      cout << element << ' ';
   }
};

int main()
{

   vector <int> numsInVec{ 2017, 0, -1, 42, 10101, 25 };

   cout << "Elements in vector are: " << endl;
   DisplayElementKeepCount <int> functor =
      for_each (numsInVec.cbegin(),
		numsInVec.cend(),
		DisplayElementKeepCount<int> ());
   cout << endl;

   // Use the state stored in the return value of for_each!
   cout << "'" << functor.count << "' elements displayed" << endl;

   string str ("for_each and strings!");
   cout << "Sample string: " << str << endl;

   cout << "Characters displayed using lambda: " << endl;
   int numChars = 0;
   for_each (str.cbegin(), str.cend(),
	     [&numChars] (char c) { cout << c << ' '; ++numChars; } );

   cout << endl;
   cout << "'" << numChars << "' characters displayed" << endl;

   return 0;
}
