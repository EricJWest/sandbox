/* Listing 16.1: STL String Instantiation and Copy Techniques
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   const char* constCStyleString = "Hello String!";
   cout << "Constant string is: " << constCStyleString << endl;

   std::string strFromConst (constCStyleString); // constructor
   cout << "strFromConst is: " << strFromConst << endl;

   std::string str2 ("Hello Another String!");
   std::string str2Copy (str2);
   cout << "str2Copy is: " << str2Copy << endl;

   // Initialize a string to the first 10 characters of another
   std::string strPartialCopy (constCStyleString, 10);
   cout << "strPartialCopy is: " << strPartialCopy << endl;

   // Initialize a string object to contain 10 'a's
   std::string strRepeatChars (10, 'a');
   cout << "strRepeatChars is : " << strRepeatChars << endl;

   return 0;
}
