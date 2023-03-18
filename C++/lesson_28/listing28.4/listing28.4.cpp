/* Listing 28.4 The Destruction Order of Local Objects 
   in the Event of an Exception

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

struct StructA
{
   StructA() {cout << "StructA constructor" << endl;}
   ~StructA() {cout << "StructA destructor" << endl;}
};

struct StructB
{
   StructB() {cout << "StructB constructor" << endl;}
   ~StructB() {cout << "StructB destructor" << endl;}
};

void FuncB() // throws an exception
{
   cout << "In Func B" << endl;
   StructA objA;
   StructB objB;
   cout << "About to throw up!" << endl;
   throw "Throwing for the heck of it";
}

void FuncA()
{
   try
   {
      cout << "In Func A" << endl;
      StructA objA;
      StructB objB;
      FuncB();
      cout << "FuncA: returning to caller" << endl;
   }
   catch(const char* exp)
   {
      cout << "FuncA: Caught exception: " << exp << endl;
      cout << "Handled it, will not throw to caller" << endl;
      // throw; // uncomment this line to throw to main()
   }
}

int main()
{
   cout << "main(): Started execution" << endl;

   try
   {
      FuncA();
   }
   catch(const char* exp)
   {
      cout << "main(): Caught exception: " << exp << endl;
   }
   cout << "main(): exiting gracefully" << endl;

   return 0;
}
