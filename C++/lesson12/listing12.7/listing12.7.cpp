/* Listing 12.7: A Class with Overloaded Less-Than (<), Greater-Than (>), Less-Than_Equals (<=) and Greater-Than-Equals (>=) Operators
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

   // equality operator
   bool operator== (const Date& compareTo)
   {
      return ((year == compareTo.year) && (month == compareTo.month) && (day == compareTo.day));
   }

   // less-than operator
   bool operator< (const Date& compareTo)
   {
      if (year < compareTo.year)
         return true;
      else if (month < compareTo.month)
         return true;
      else if (day < compareTo.day)
         return true;
      else
         return false;
   }

   // less-than-equals operator
   bool operator<= (const Date& compareTo)
   {
      if (this->operator==(compareTo))
         return true;
      else
         return this->operator<(compareTo);
   }

   // greater-than operator
   bool operator> (const Date& compareTo)
   {
      if (year > compareTo.year)
         return true;
      else if (month > compareTo.month)
         return true;
      else if (day > compareTo.day)
         return true;
      else
         return false;
   }

   // greater-than-equals operator
   bool operator>= (const Date& compareTo)
   {
      if (this->operator==(compareTo))
         return true;
      else
         return this->operator>(compareTo);
   }

   void DisplayDate()
   {
      cout << month << " / " << day << " / " << year << endl;
   }
};

int main()
{
   Date holiday1 (12, 25, 2016);
   Date holiday2 (12, 31, 2016);

   cout << "holiday1 is: ";
   holiday1.DisplayDate();
   cout << "holiday2 is: ";
   holiday2.DisplayDate();

   if (holiday1 < holiday2)
      cout << "Operator < : holiday1 < holiday 2" << endl;
   if (holiday1 <= holiday2)
      cout << "Operator <= : holiday1 <= holiday 2" << endl;
   if (holiday1 > holiday2)
      cout << "Operator > : holiday1 > holiday 2" << endl;
   if (holiday1 >= holiday2)
      cout << "Operator >= : holiday1 >= holiday 2" << endl;

   return 0;
}
