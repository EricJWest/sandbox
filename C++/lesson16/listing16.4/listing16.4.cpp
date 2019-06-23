/* Listing 16.4: Demonstrating the Use of 'string::find()' with an STL String
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string sampleStr ("Good day String! Today is beautiful!");
   cout << "Sample string is: " << endl << sampleStr << endl << endl;

   // Find substring "day"
   size_t charPos = sampleStr.find("day", 0);

   // Check if the substring was found
   if (charPos != string::npos)
      cout << "First instance of \"day\" as position " << charPos << endl;
   else
      cout << "Substring not found." << endl;

   cout << "Locating all instances of substring \"day\"" << endl;
   size_t subStrPos = sampleStr.find("day", 0);

   while (subStrPos != string::npos)
   {
      cout << "\"day\" found at position " << subStrPos << endl;

      // Make find() search forward from the next character onwards
      size_t searchOffset = subStrPos + 1;

      subStrPos = sampleStr.find("day", searchOffset);
   }

   return 0;
}
