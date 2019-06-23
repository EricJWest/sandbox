/* Listing 7.6: A Function With Multiple Return Statements
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;
const double Pi = 3.14159265;

void QueryAndCalculate()
{
   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   cout << "Area: " << Pi * radius * radius << endl;

   cout << "Do you wish to calculate circumference (y/n)? ";
   char calcCircumference = 'n';
   cin >> calcCircumference;

   if (calcCircumference == 'n')
      return;

   cout << "Circumference: " << 2 * Pi * radius << endl;
   return;
}

int main()
{
   QueryAndCalculate();
   return 0;
}
