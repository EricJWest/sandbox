/* Listing 17.3: Using 'vector::insert()' to Insert Elements at a Set Position
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <vector>
using namespace std;

void DisplayVector(const vector<int>& inVec)
{
   for (auto element = inVec.cbegin(); element != inVec.cend(); ++element)
      cout << *element << ' ';
   cout << endl;
}

int main()
{

   // instantiate a vector with 4 elements, each initialized to 90
   vector <int> integers (4, 90);

   cout << "The initial contents of the vector: ";
   DisplayVector(integers);

   // Insert 25 at the beginning
   integers.insert (integers.begin(), 25);

   // Insert 2 numbers of value 45 at the end
   integers.insert(integers.end(), 2, 45);

   cout << "Vector after inserting elements at beginning and end: ";
   DisplayVector(integers);

   // Another vector containing 2 elements of value 30
   vector<int> another (2, 30);

   // Insert two elements from another container in position [1]
   integers.insert(integers.begin() + 1, another.begin(), another.end());

   cout << "Vector after inserting contents from another vector" << endl;
   cout << "in the middle: ";
   DisplayVector(integers);

   return 0;
}
