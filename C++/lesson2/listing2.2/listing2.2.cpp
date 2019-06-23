/* Listing 2.2: The 'using namespace' Declaration
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

// Preprocessor directive that includes header iostream
#include <iostream>

// Start of your program
int main()
{
   // Tell th e compiler what namespace to search in
   using namespace std;

   /* Write to the screen using std::cout */
   cout << "Hello World" << endl;

   // Return a value to the OS
   return 0;
}
