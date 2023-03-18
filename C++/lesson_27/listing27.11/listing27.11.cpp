/* Listing 27.11 Converting an Integer Value into a String 
   Representation and Vice Versa Using 'std::stringstream'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
   cout << "Enter an integer: ";
   int input = 0;
   cin >> input;

   stringstream converterStream;
   converterStream << input;
   string inputAsStr;
   converterStream >> inputAsStr;

   cout << "Integer Input = " << input << endl;
   cout << "String gained from integer = " << inputAsStr << endl;

   stringstream anotherStream;
   anotherStream << inputAsStr;
   int Copy = 0;
   anotherStream >> Copy;

   cout << "Integer gained from string, Copy = " << Copy << endl;

   return 0;
}
