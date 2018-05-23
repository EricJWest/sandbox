/* Listing 6.4
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   enum DaysOfWeek
   {
      Sunday = 0,
      Monday,
      Tuesday,
      Wednesday,
      Thursday,
      Friday,
      Saturday
   };

   cout << "Find what days of the week are named after!" << endl;
   cout << "Enter a number for a day (Sunday = 0): ";

   int dayInput = Sunday; // Initialize to Sunday
   cin >> dayInput;

   if (dayInput == Sunday)
      cout << "Sunday was named after the Sun" << endl;
   else if (dayInput == Monday)
      cout << "Monday was named after the Moon" << endl;
   else if (dayInput == Tuesday)
      cout << "Tuesday was named after the Mars" << endl;
   else if (dayInput == Wednesday)
      cout << "Wednesday was named after the Mercury" << endl;
   else if (dayInput == Thursday)
      cout << "Thursday was named after the Jupiter" << endl;
   else if (dayInput == Friday)
      cout << "Friday was named after the Venus" << endl;
   else if (dayInput == Saturday)
      cout << "Saturday was named after the Saturn" << endl;
   else
      cout << "Wrong input, execute again" << endl;

   return 0;
}
