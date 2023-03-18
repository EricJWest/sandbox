/* Listing 16.7: Converting an STL String to Uppercase using 'std::transform()'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   cout << "Please enter a string for case-conversion: " << endl;
   cout << "< ";

   string inStr;
   getline (cin, inStr);
   cout << endl;

   transform(inStr.begin(), inStr.end(), inStr.begin(), ::toupper);
   cout << "The string converted to upper case is: " << endl;
   cout << inStr << endl << endl;

   transform(inStr.begin(), inStr.end(), inStr.begin(), ::tolower);
   cout << "The string converted to lower case is: " << endl;
   cout << inStr << endl;

   return 0;
}
