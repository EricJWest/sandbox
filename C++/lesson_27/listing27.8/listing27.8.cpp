/* Listing 27.8 Creating a New Text File and Writing Text 
   Into It Using 'ofstream'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream myFile;
   myFile.open("HelloFile.txt", ios_base::out);

   if (myFile.is_open())
   {
      cout << "File open successful" << endl;

      myFile << "My first text file!" << endl;
      myFile << "Hello file!" << endl;

      cout << "Finished writing to file, will close now" << endl;
      myFile.close();
   }

   return 0;
}
