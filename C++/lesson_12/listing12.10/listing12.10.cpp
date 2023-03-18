/* Listing 12.10: A Class with a Function Operator (())
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

class Display
{
public:

   void operator() (string input) const
   {
      cout << input << endl;
   }
};

int main()
{
   Display displayFuncObj;

   displayFuncObj("Display this string! ");

   // the above is equivalent to the following
   displayFuncObj.operator()("Display this string! ");

   return 0;
}
