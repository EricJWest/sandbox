/* Listing 5.2: Demonstrate the Difference Between Postfix and Prefix Operators
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   int startValue = 101;
   cout << "Start value of integer being operated: " << startValue << endl;
   cout << endl;

   int postfixIncrement = startValue++;
   cout << "Result of postfix increment = " << postfixIncrement << endl;
   cout << "After postfix increment, startValue = " << startValue << endl;
   cout << endl;

   startValue = 101; // Reset
   int prefixIncrement = ++startValue;
   cout << "Result of prefix increment = " << prefixIncrement << endl;
   cout << "After prefix increment, startValue = " << startValue << endl;
   cout << endl;

   startValue = 101; // Reset
   int postfixDecrement = startValue--;
   cout << "Result of postfix decrement = " << postfixDecrement << endl;
   cout << "After postfix decrement, startValue = " << startValue << endl;
   cout << endl;

   startValue = 101; // Reset
   int prefixDecrement = --startValue;
   cout << "Result of prefix decrement = " << prefixDecrement << endl;
   cout << "After prefix decrement, startValue = " << startValue << endl;
   cout << endl;

   return 0;
}
