/* Listing 11.5: Demonstrating the Presence of a Hidden VFT Pointer
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class SimpleClass // base class without VFT
{
   int a, b;

public:
   void DoSomething() {}
};

class Base // base class with hidden VFT
{
   int a, b;

public:
   virtual void DoSomething() {} // virtual function
};

int main()
{
   cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
   cout << "sizeof(Base) = " << sizeof(Base) << endl;

   return 0;
}
