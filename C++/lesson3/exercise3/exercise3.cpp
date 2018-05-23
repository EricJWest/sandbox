/* Lesson 3, Exercise 3
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
const double pi = 22.0 / 7;

int main()
{
   using namespace std;
   cout << "Calculating the area and circumference of a circle" << endl;

    // prompt user for radius
    double radius = 0;
    cout << "Choose a radius for the circle: ";
    cin >> radius;

    // calculate the area
    double area = pi * radius * radius;
    cout << "Area = " << area << endl;

    // calculate the circumference
    double circumference = 2 * pi * radius;
    cout << "Circumference = " << circumference << endl;

  return 0;
}
