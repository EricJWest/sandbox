/* Listing 24.6 Working with a 'priority_queue' 
   Using 'push()', 'top()', and 'pop()'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <queue>
using namespace std;

int main()
{
   // A priority_queue of integers
   priority_queue <int> numsInPrioQ;

   cout << "Inserting {10, 5, -1, 20} into the priority_queue" << endl;
   numsInPrioQ.push(10);
   numsInPrioQ.push(5);
   numsInPrioQ.push(-1);
   numsInPrioQ.push(20);

   cout << "Deleting the " << numsInPrioQ.size() << " elements" << endl;
   while (!numsInPrioQ.empty())
   {
      cout << "Deleting topmost element: " << numsInPrioQ.top() << endl;
      numsInPrioQ.pop();
   }

   return 0;
}
