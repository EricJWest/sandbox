/* Listing 17.2: Inserting Elements into a Vector Using 'vector::push_back()'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <vector>
using namespace std;

int main()
{

   // initialize a vector of integers
   vector <int> integers;

   // Insert sample integers into the vector
   integers.push_back (50);
   integers.push_back (1);
   integers.push_back (987);
   integers.push_back (1001);

   cout << "The vector contains ";
   cout << integers.size() << " Elements" << endl;

   return 0;
}
