/* Listing 16.6: Reversing an STL String using 'std::reverse()'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   string sampleStr ("Hello String! We will reverse you!");
   cout << "The original sample string is: " << endl;
   cout << sampleStr << endl << endl;

   reverse (sampleStr.begin(), sampleStr.end());
   cout << "After applying the std:reverse algorithm: " << endl;
   cout << sampleStr << endl;

   return 0;
}
