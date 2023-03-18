/* Listing 19.5: A Telephone Directory Featuring STL 'set', 'find', and 'erase'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <set>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void DisplayContents (const T& container)
{
   for (auto element = container.cbegin();
        element != container.cend();
        ++element)
      cout << *element << endl;

   cout << endl;
}

struct ContactItem
{
   string name;
   string phoneNum;
   string displayAs;

   ContactItem (const string& nameInit, const string& phone)
   {
      name = nameInit;
      phoneNum = phone;
      displayAs = (name + ": "+ phoneNum);
   }

   // used by set::find() given contact list item
   bool operator == (const ContactItem& itemToCompare) const
   {
      return (itemToCompare.name == this->name);
   }

   // used to sort
   bool operator < (const ContactItem& itemToCompare) const
   {
      return (this->name < itemToCompare.name);
   }

   //used in DisplayContents via cout
   operator const char*() const
   {
      return displayAs.c_str();
   }
};

int main()
{
   set<ContactItem> setContacts;
   setContacts.insert(ContactItem("Stephen Hawking", "+44 7889 879 879"));
   setContacts.insert(ContactItem("Kip Thorne", "+1 626 543 9876"));
   setContacts.insert(ContactItem("Leonard Susskind", "+1 650 882 1234"));
   setContacts.insert(ContactItem("Thomas Baumgarte", "+1 207 334 2322"));
   setContacts.insert(ContactItem("Miguel Alcubierre", "+52 878 969 5567"));
   setContacts.insert(ContactItem("Roger Penrose", "+44 2323 455 876"));
   DisplayContents(setContacts);

   cout << "Enter a name you wish to delete: ";
   string inputName;
   getline(cin, inputName);

   auto contactFound = setContacts.find(ContactItem(inputName, ""));
   if(contactFound != setContacts.end())
   {
      setContacts.erase(contactFound);
      cout << "Displaying contents after erasing " << inputName << endl;
      DisplayContents(setContacts);
   }
   else   cout << "Contact not found" << endl;

   return 0;
}
