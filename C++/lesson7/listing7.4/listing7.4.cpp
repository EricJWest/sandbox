/* Listing 7.4
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

// Function declarations (prototypes)
double Area(double radius, double pi = 3.14);

int main()
{
   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   cout << "pi is 3.14, do you wish to change this (y / n)? ";
   char changePi = 'n';
   cin >> changePi;

   double circleArea = 0;
   if (changePi == 'y')
   {
      cout << "Enter new pi: ";
      double newPi = 0;
      cin >> newPi;
      circleArea = Area(radius, newPi);
   }
   else
      circleArea = Area(radius);  // Ignore 2nd param, use default

   // Call function "Area"
   cout << "Area is: " << circleArea << endl;

   return 0;
}

// Function definitions (implementations)
double Area(double radius, double pi)
{
   return pi * radius * radius;
}
