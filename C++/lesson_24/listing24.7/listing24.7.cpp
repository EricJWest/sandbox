/* Listing 24.7 Instantiating a 'priority_queue' That Holds
   the Smallest Value at the Top

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main()
{
   // A priority_queue of integersi sorted using std::greater <>
   priority_queue <int, vector<int>, greater <int>> numsInPrioQ;

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
