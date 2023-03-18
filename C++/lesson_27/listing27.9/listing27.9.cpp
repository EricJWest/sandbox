/* Listing 27.9 Reading Text from File 'HelloFile.txt'
   Created in Listing 27.8

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ifstream myFile;
   myFile.open("HelloFile.txt", ios_base::in);

   if (myFile.is_open())
   {
      cout << "File open successful. It contains: " << endl;
      string fileContents;

      while (myFile.good())
      {
	 //myFile >> fileContents;
         getline (myFile, fileContents);
	 cout << fileContents << endl;
      }

      cout << "Finished reading file, will close now" << endl;
      myFile.close();
   }
   else
      cout << "open() failed: check if file is in the right folder" << endl;

   return 0;
}
