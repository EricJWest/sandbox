/* Listing 25.3 The Instantiation of a 'vector<bool>'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <vector>
using namespace std;

int main()
{
   // Instantiate an object using the default constructor
   vector <bool> boolFlags1;

   // Initialize a vector with 10 elements with value true
   vector <bool> boolFlags2 (10, true);

   // Instantiate one object as a copy of another
   vector <bool> boolFlagsCopy (boolFlags2);

   return 0;
}
