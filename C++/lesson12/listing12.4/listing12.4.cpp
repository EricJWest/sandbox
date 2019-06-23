/* Listing 12.4: A Class with Overloaded Addition (+) and Substraction (-) Operators
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Date
{
private:
   int day, month, year;

public:
   Date(int inMonth, int inDay, int inYear)
       : month(inMonth), day(inDay), year(inYear) {};

   Date operator+ (int daysToAdd) // binary addition
   {
      Date newDate (month, day + daysToAdd, year);
      return newDate;
   }

   Date operator- (int daysToSub) // binary substraction
   {
      Date newDate (month, day - daysToSub, year);
      return newDate;
   }

   void DisplayDate()
   {
      cout << month << " / " << day << " / " << year << endl;
   }
};

int main()
{
   Date holiday (12, 25, 2016);
   cout << "Holiday is on: ";
   holiday.DisplayDate();

   Date prevHoliday (holiday - 19);
   cout << "Previous holiday is on: ";
   prevHoliday.DisplayDate();

   Date nextHoliday (holiday + 6);
   cout << "Next holiday is on: ";
   nextHoliday.DisplayDate();

   // NOTE: does not account for changes in month, leap years, etc


   return 0;
}
