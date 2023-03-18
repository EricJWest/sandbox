/* Listing 23.4 Using 'fill() and 'fill_n()' to Set Initial Values 
   in a Container

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   // Initialize a sample vector with 3 elements
   vector <int> numsInVec(3);

   // Fill all elements in the container with value 9
   fill (numsInVec.begin(), numsInVec.end(), 9);

   // Increase size of vector to hold 6 elements
   numsInVec.resize(6);

   // Fill the three elements starting at offset position 3 with value -9
   fill_n (numsInVec.begin() + 3, 3, -9);

   cout << "Contents of the vector are: " << endl;

   for (size_t index = 0; index < numsInVec.size(); ++index)
   {
      cout << "Element [" << index << "] = ";
      cout << numsInVec[index] << endl;
   }

   return 0;
}
