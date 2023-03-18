/* Listing 25.4 Using the 'vector<bool>'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <vector>
#include <iostream>

using namespace std;

int main()
{
   vector <bool> boolFlags(3); // instantiated to hold 3 bool flags
   boolFlags [0] = true;
   boolFlags [1] = true;
   boolFlags [2] = false;

   boolFlags.push_back (true); // insert a fourth bool at the end

   cout << "The contents of the vector are: " << endl;
   for (size_t index = 0; index < boolFlags.size(); ++index)
      cout << boolFlags [index] << ' ';

   cout << endl;
   boolFlags.flip();

   cout << "The contents of the vector are: " << endl;
   for (size_t index = 0; index < boolFlags.size(); ++index)
      cout << boolFlags[index] << ' ';

   cout << endl;

   return 0;
}
