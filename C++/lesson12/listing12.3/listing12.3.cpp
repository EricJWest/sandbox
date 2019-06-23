/* Listing 12.3: Demonstrating the Use of Smart Pointer 'unique_ptr'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <memory> // new include to use unique_ptr
using namespace std;

class Date
{
private:
   int day, month, year;

public:
   Date(int inMonth, int inDay, int inYear)
       : month(inMonth), day(inDay), year(inYear) {};

   void DisplayDate()
   {
      cout << month << " / " << day << " / " << year << endl;
   }
};

int main()
{
   unique_ptr<int> smartIntPtr(new int);
   *smartIntPtr = 42;
   // Use smart pointer type like an int*
   cout << "Integer value is: " << *smartIntPtr << endl;

   unique_ptr<Date> smartHoliday (new Date(12, 25, 2016));
   // use smartHoliday just as you would a Date*
   cout << "The new instance of date contains: ";
   smartHoliday->DisplayDate();

   return 0;
}
