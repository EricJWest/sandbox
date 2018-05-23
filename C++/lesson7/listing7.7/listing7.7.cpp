/* Listing 7.7
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Area(double radius); // for circle
double Area(double radius, double height); // for cylinder

int main()
{
   cout << "Enter z for Cylinder , c for Circle: ";
   char userSelection = 'z';
   cin >> userSelection;

   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   if (userSelection == 'z')
   {
      cout << "Enter height: ";
      double height = 0;
      cin >> height;

      // Invoke overloaded variant of Area for Cylinder
      cout << "Area of cylinder is: " << Area(radius, height) << endl;
   }
   else
      cout << "Area of circle is: " << Area(radius) << endl;

   return 0;
}

// definition of Area for circle
double Area(double radius)
{
   return Pi * radius * radius;
}

// overloaded definition of Area for Cylinder
double Area(double radius, double height)
{
   // reuse the area of circle
   return (2 * Area(radius)) + (2 * Pi * radius * height);
}
