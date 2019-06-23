/* Listing 16.3: Demonstrating How to Concatenate STL Strings
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string sampleStr1 ("Hello");
   string sampleStr2 (" String!");

   // Concatenate
   sampleStr1 += sampleStr2;
   cout << sampleStr1 << endl << endl;

   string sampleStr3 (" Fun is not needing to use pointers!");
   sampleStr1.append(sampleStr3);
   cout << sampleStr1 << endl << endl;

   const char* constCStyleString = " You however still can!";
   sampleStr1.append(constCStyleString);
   cout << sampleStr1 << endl << endl;

   return 0;
}
