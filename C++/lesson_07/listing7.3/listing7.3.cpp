/* Listing 7.3: A Function With No Parameters and No Return Values
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

void SayHello();

int main()
{
   SayHello();
   return 0;
}

void SayHello()
{
   cout << "Hello World!" << endl;
   return; // symbolic empty return (optional)
}
