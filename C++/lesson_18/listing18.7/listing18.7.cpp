/* Listing 18.7 A List of Class Objects: Creating a Contacts List
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <list>
#include <string>
#include <iostream>
using namespace std;

template <typename T>
void displayAsContents (const T& container)
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
   string phone;
   string displayAs;

   ContactItem (const string& conName, const string& conNum)
   {
      name = conName;
      phone = conNum;
      displayAs = (name + ": " + phone);
   }

   // used by list::remove() given contact list item
   bool operator == (const ContactItem& itemToCompare) const
   {
      return (itemToCompare.name == this->name);
   }

   // used by list::sort() without parameters
   bool operator < (const ContactItem& itemToCompare) const
   {
      return (this->name < itemToCompare.name);
   }

   // used in displayAsContents via cout
   operator const char*() const
   {
      return displayAs.c_str();
   }
};

bool SortOnPhoneNumber (const ContactItem& item1, const ContactItem& item2)
{
   return (item1.phone < item2.phone);
}

int main()
{
   list <ContactItem> contacts;
   contacts.push_back(ContactItem("Jack Welsch", "+1 7889879879"));
   contacts.push_back(ContactItem("Bill Gates", "+1 97789787998"));
   contacts.push_back(ContactItem("Angi Merkel", "+49 234565466"));
   contacts.push_back(ContactItem("Bari Obama", "+1 66454564797"));
   contacts.push_back(ContactItem("Ben Affleck", "+1 745641314"));
   contacts.push_back(ContactItem("Dan Craig", "+1 123641976"));

   cout << "List in initial order: " << endl;
   displayAsContents(contacts);

   cout << "Sorting in alphabetical order via operator<: " << endl;
   contacts.sort();
   displayAsContents(contacts);

   cout << "Sorting in order of phone numbers via predicate: " << endl;
   contacts.sort(SortOnPhoneNumber);
   displayAsContents(contacts);

   cout << "Erasing Jack Welsch from the list: " << endl;
   contacts.remove(ContactItem("Jack Welsch", ""));
   displayAsContents(contacts);

   return 0;
}
