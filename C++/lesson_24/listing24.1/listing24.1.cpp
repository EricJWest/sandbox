/* Listing 24.1 Instantiation of an STL Stack

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
   // A stack of integers
   stack <int> numsInStack;

   // A stack of doubles
   stack <double> dblsInStack;
   
   // A stack of doubles contained in a vector
   stack <double, vector <double>> doubleStackedInVec;

   // Initializing one stack to be a copy of another
   stack <int> numsInStackCopy (numsInStack);

   return 0;
}
