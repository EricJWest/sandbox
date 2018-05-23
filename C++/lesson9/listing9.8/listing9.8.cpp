/* Listing 9.8
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
   char* buffer;

public:
   MyString(const char* initString) // constructor
   {
      buffer = NULL;
      if(initString != NULL)
      {
         buffer = new char [strlen(initString) + 1];
         strcpy(buffer, initString);
      }
   }

   ~MyString() // destructor
   {
      cout << "Invoking destructor, clearing up" << endl;
      delete[] buffer;
   }

   int GetLength()
   {
      return strlen(buffer);
   }

   const char* GetString()
   {
      return buffer;
   }
};

void UseMyString(MyString str)
{
   cout << "String buffer in MyString is " << str.GetLength();
   cout << " characters long" << endl;

   cout << "buffer contains: " << str.GetString() << endl;
   return;
}

int main()
{
   MyString sayHello("Hello from String Class");
   UseMyString(sayHello);

   return 0;
}
