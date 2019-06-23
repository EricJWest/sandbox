/* Listing 4.6: A Risky Application Using C-style Strings and User Input
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   cout << "Enter a word NOT longer than 20 characters: " << endl;

   char userInput [21] = {'\0'};
   cin >> userInput;

   cout << "Length of your input was: " << strlen(userInput) << endl;

   return 0;
}
