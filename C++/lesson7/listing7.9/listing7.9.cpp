/* Listing 7.9
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

// output parameter result by reference
void Area(double radius, double& result)
{
   result = Pi * radius * radius;
}

int main()
{
   cout << "Enter radius: ";
   double radius = 0;
   cin >> radius;

   double areaFetched = 0;
   Area(radius, areaFetched);

   cout << "The area is: " << areaFetched << endl;

   return 0;
}
