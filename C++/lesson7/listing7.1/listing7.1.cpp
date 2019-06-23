/* Listing 7.1: Demonstrating the Use of Functions
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

const double PI = 3.14159265;

// Function declarations (prototypes)
double Area(double radius);
double Circumference(double radius);

int main()
{
   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   // Call function "Area"
   cout << "Area is: " << Area(radius) << endl;

   // Call function "Circumference"
   cout << "Circumference is: " << Circumference(radius) << endl;

   return 0;
}

// Function definitions (implementations)
double Area(double radius)
{
   return PI * radius * radius;
}

double Circumference(double radius)
{
   return 2 * PI * radius;
}
