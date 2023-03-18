/* Listing 27.7 Reading a Complete Line Input by User 
   Using 'getline()' and 'cin'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "Enter your name: ";
   string name;
   getline(cin, name);
   cout << "Hi " << name << endl;

   return 0;
}
