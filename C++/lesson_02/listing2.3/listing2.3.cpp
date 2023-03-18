/* Listing 2.3: Another Demonstration of the 'using' Keyword
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

// Preprocessor directive
#include <iostream>

// Start of your program
int main()
{
   using std::cout;
   using std::endl;

   /* Write to the screen using std::cout */
   cout << "Hello World" << endl;

   // Return a value to the OS
   return 0;
}
