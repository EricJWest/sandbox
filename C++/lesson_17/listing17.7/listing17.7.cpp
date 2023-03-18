/* Listing 17.7: Demonstration of 'vector::size()' and 'vector::capacity()'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   // Instantiate a vector object that holds 5 integers of default value
   vector <int> integers (5);

   cout << "Vector of integers was instantiated with " << endl;
   cout << "Size: " << integers.size();
   cout << ", Capacity: " << integers.capacity() << endl << endl;

   // Inserting a 6th element into the vector
   integers.push_back (666);

   cout << "After inserting an additional element..." << endl;
   cout << "Size: " << integers.size();
   cout << ", Capacity: " << integers.capacity() << endl << endl;

   // Inserting a 7th element into the vector
   integers.push_back (777);

   cout << "After inserting yet another element..." << endl;
   cout << "Size: " << integers.size();
   cout << ", Capacity: " << integers.capacity() << endl;

   return 0;
}
