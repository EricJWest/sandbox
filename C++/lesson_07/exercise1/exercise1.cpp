/* Lesson 7, Exercise 1
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Volume(double radius);
double Volume(double radius, double height);

int main()
{
   cout << "Enter s for Sphere , c for Cylinder: ";
   char userSelection = 's';
   cin >> userSelection;

   cout << "Enter radius: ";
   double radiusInput = 0;
   cin >> radiusInput;

   if (userSelection == 'c')
   {
      cout << "Enter height: ";
      double heightInput = 0;
      cin >> heightInput;

      // Invoke overloaded variant of Volume for Cylinder
      cout << "Volume of cylinder is: " << Volume(radiusInput, heightInput) << endl;
   }
   else
      cout << "Volume of sphere is: " << Volume(radiusInput) << endl;

   return 0;
}

// volume of a sphere
double Volume(double radius)
{
   return (4/3) * Pi * radius * radius * radius;
}

// volume of a cylinder
double Volume(double radius, double height)
{
   return Pi * radius * radius * height;
}
