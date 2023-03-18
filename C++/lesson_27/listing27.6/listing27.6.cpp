/* Listing 27.6 Inserting Text Into a 'std::string' Using 'cin'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   cout << "Enter your name: ";
   string name;
   cin >> name;
   cout << "Hi " << name << endl;

   return 0;
}
