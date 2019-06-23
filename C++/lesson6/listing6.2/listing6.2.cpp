/* Listing 6.2: Check for Bounds Before Copying a String into a 'char' Array (cf. Listing 4.6)
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
   cout << "Enter a line of text: " << endl;
   string userInput;
   getline (cin, userInput);

   char copyInput[20] = {'\0'}; // 20 character limit array
   if (userInput.length() < 20) // check length of userInput
   {
      strcpy(copyInput, userInput.c_str());
      cout << "copyInput contains: " << copyInput << endl;
   }
   else
      cout << "Bound exceeded: won't copy!" << endl;

   return 0;
}
