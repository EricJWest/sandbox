/* Listing 24.2 Demonstrates Inserting Elements in a Stack 
   Using 'push()' and Removing Elements Using 'pop()'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <stack>
using namespace std;

int main()
{
   // A stack of integers
   stack <int> numsInStack;

   // push: insert values at top of stack
   cout << "Pushing {25, 10, -1, 5} on stack in that order: " << endl;
   numsInStack.push(25);
   numsInStack.push(10);
   numsInStack.push(-1);
   numsInStack.push(5);

   cout << "Stack contains " << numsInStack.size() << " elements" << endl;
   while (numsInStack.size() != 0 )
   {
      cout << "Popping topmost element: " << numsInStack.top() << endl;
      numsInStack.pop(); // pop: removes topmost element
   }

   if (numsInStack.empty()) // true: due to previous pop()s
      cout << "Popping all elements empties the stack!" << endl;

   return 0;
}
