/* Listing 24.5 Instantiating an STL 'priority_queue'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <queue>
#include <functional>
using namespace std;

int main()
{
   // A priority_queue of integers sorted using std::less<> (default)
   priority_queue <int> numsInPrioQ;

   // A priority_queue of doubles
   priority_queue <double> dblsInPrioQ;

   // A priority_queue of integers sorted using std::greater<>
   priority_queue <int, deque <int>, greater<int>> numsInDescendingQ;

   // A priority_queue created as a copy of another
   priority_queue <int> copyQ(numsInPrioQ);

   return 0;
}
