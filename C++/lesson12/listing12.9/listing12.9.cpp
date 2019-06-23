/* Listing 12.9: A Class with Subscript Operator ([])
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class MyString
{
private:
   char* buffer;

   // private default constructor
   MyString() {}

public:

   // Constructor
   MyString(const char* initialInput)
   {
      if (initialInput != NULL)
      {
         buffer = new char [strlen(initialInput) + 1];
         strcpy(buffer, initialInput);
      }
      else
         buffer = NULL;
   };

   // Copy constructor (from Listing 9.9)
   MyString(const MyString& copySource);

   // Copy assignment operator (from Listing 12.8)
   MyString& operator= (const MyString& copySource)
   {
      if ((this != &copySource) && (copySource.buffer != NULL))
      {
         if (buffer != NULL)
            delete[] buffer;

         // ensure deep copy by first allocating own buffer
         buffer = new char [strlen(copySource.buffer) + 1];

         // copy from teh source into local buffer
         strcpy(buffer, copySource.buffer);
      }

      return *this;
   }

   // Destructor
   ~MyString()
   {
      delete[] buffer;
   }
   
   int GetLength() const
   {
		return strlen(buffer);
	}

   operator const char* ()
   {
       return buffer;
   }
};

int main()
{
   cout << "Type a statement: ";
	string strInput;
	getline(cin, strInput);

	MyString youSaid(strInput.c_str());

   cout << "Using operator[] for displaying your input: " << endl;
	for (int index = 0; index < youSaid.GetLength(); ++index)
		cout << youSaid[index] << " ";
	cout << endl;

	cout << "Enter index 0 - " << youSaid.GetLength() -1 << ": ";
	int index = 0;
	cin >> index;
	cout << "Input character at zero-based position: " << index;
	cout << " is: " << youSaid[index] << endl;

   return 0;
}
