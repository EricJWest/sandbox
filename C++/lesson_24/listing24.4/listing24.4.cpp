/* Listing 24.4 Inserting, Removing, and Inspecting Elements
   in a 'queue' of Integers

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <queue>
using namespace std;

int main()
{
   // A queue of integers
   queue <int> numsInQ;

   cout << "Inserting {10, 5, -1, 20} into queue" << endl;
   numsInQ.push(10);
   numsInQ.push(5);
   numsInQ.push(-1);
   numsInQ.push(20);

   cout << "Queue contains " << numsInQ.size() << " elements" << endl;
   cout << "Element at front: " << numsInQ.front() << endl;
   cout << "Element at back: " << numsInQ.back() << endl;

   while (numsInQ.size() != 0)
   {
      cout << "Deleting element: " << numsInQ.front() << endl;
      numsInQ.pop(); // pop: removes element at front
   }

   if (numsInQ.empty())
      cout << "The queue is now empty!" << endl;

   return 0;
}
