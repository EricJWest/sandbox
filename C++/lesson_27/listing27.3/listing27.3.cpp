/* Listing 27.3 Set the Width of a Field via 'setw()' and 
   the Fill Characters Using 'setfill()' Manipulators

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   cout << "Hey - default!" << endl;

   cout << setw(35); // set field width to 25 columns
   cout << "Hey - right aligned!" << endl;

   cout << setw(35) << setfill('*');
   cout << "Hey - right aligned!" << endl;
   
   cout << "Hey - back to default!" << endl;

   return 0;
}
