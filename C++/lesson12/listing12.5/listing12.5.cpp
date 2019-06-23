/* Listing 12.5: A Class with Overloaded Addition Assignment (+=) and Substraction Assignment (-=) Operators
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

   void operator+= (int daysToAdd) // addition assignment
   {
      day += daysToAdd;
   }

   void operator-= (int daysToSub) // substraction assignment
   {
      day -= daysToSub;
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

   cout << "holiday -= 19 gives: ";
   holiday -= 19;
   holiday.DisplayDate();

   cout << "holiday += 25 gives: ";
   holiday += 25;
   holiday.DisplayDate();

   // NOTE: does not account for changes in month, leap years, etc


   return 0;
}
