/* Listing 7.11
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

auto Area(double radius)
{
   return Pi * radius * radius;
}

int main()
{
   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   // Call function "Area"
   cout << "Area is: " << Area(radius) << endl;

   return 0;
}
