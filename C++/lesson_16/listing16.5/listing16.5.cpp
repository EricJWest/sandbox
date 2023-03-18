/* Listing 16.5: Demonstrating the Use of 'string::erase()' with an STL String
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   string sampleStr ("Hello String! Wake up to a beautiful day!");
   cout << "The original sample string is: " << endl;
   cout << sampleStr << endl << endl;

   // Delete characters given position and count
   cout << "Truncating the second sentence: " << endl;
   sampleStr.erase(13, 28);
   cout << sampleStr << endl << endl;

   // Find character 'S' using find() algorithm
   string::iterator iCharS = find (sampleStr.begin(), sampleStr.end(), 'S');

   // If character found, 'erase' to delete a character
   cout << "Erasing character 'S' from the sample string: " << endl;
   if (iCharS != sampleStr.end())
       sampleStr.erase (iCharS);
   cout << sampleStr << endl << endl;

   // Erase a range of characters using an overloaded version of erase()
   cout << "Erasing a range between begin() and end(): " << endl;
   sampleStr.erase (sampleStr.begin(), sampleStr.end());

   // Verify the length after the erase() operation above
   if (sampleStr.length() == 0)
       cout << "The string is empty" << endl;

   return 0;
}
