/* Listing 9.10
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

class President
{
private:
   President() {}; // private default constructor
   President(const President&); // private copy constructor
   const President& operator=(const President&); // assignment operator

   string name;

public:
   static President& GetInstance()
   {
      // static objects are constructed only once
      static President onlyInstance;
      return onlyInstance;
   }

   string GetName()
   {
      return name;
   }

   void SetName(string InputName)
   {
      name = InputName;
   }
};

int main()
{
   President& onlyPresident = President::GetInstance();
   onlyPresident.SetName("Abraham Lincoln");

   // uncomment lines to see how failures prohibit duplicates
   // President second; // cannot access constructor
   // President* third = new President(); // cannot access constructor
   // Presdient fourth = onlyPresident; // cannot access copy constructor
   // onlyPresident = President::GetINstance(); // cannot access operator=

   cout << "The name of the President is: ";
   cout << President::GetInstance().GetName() << endl;

   return 0;
}
