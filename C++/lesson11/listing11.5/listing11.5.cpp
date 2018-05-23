/* Listing 11.5
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class SimpleClass
{
   int a, b;

public:
   void DoSomething() {}
};

class Base
{
   int a, b;

public:
   virtual void DoSomething() {}
};

int main()
{
   cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
   cout << "sizeof(Base) = " << sizeof(Base) << endl;

   return 0;
}
