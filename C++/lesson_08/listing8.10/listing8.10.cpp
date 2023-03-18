/* Listing 8.10: Demonstrating the Use of 'const' to Pass Pointers to a Function
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

void CalcArea(const double* const ptrPi, // const pointer to const data (i.e., no changes allowed)
              const double* const ptrRadius, // const pointer to const data (i.e., no changes allowed)
              double* const ptrArea) // const pointer to variable data (i.e., may change data pointed to, but not address)
{
   // check pointers for validity before using!
   if (ptrPi && ptrRadius && ptrArea)
      *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
}

int main()
{
   const double Pi =3.1416;

   cout << "Enter radius of circle: ";
   double radius = 0;
   cin >> radius;

   double area = 0;
   CalcArea(&Pi, &radius, &area);

   cout << "Area is " << area << endl;

   return 0;
}
