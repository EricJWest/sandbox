/* Listing 16.8: Using operator ""s Introduced by C++14
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str1 ("Traditional string \0 initialization");
   cout << "Str1: " << str1 << " Length: " << str1.length() << endl;

   string str2 ("C++14 \0 initialization using literals"s);
   cout << "Str2: " << str2 << " Length: " << str2.length() << endl;

   return 0;
}
