/* Listing 14.1: Demonstrating the Use of Macro Functions
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

#define SQUARE(x) ((x) * (x))
#define PI 3.1416
#define AREA_CIRCLE(r) (PI* (r) * (r))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
   cout << "Enter an integer: ";
   int num = 0;
   cin >> num;

   cout << "SQUARE(" << num << ") = " << SQUARE(num) << endl;
   cout << "Area of circle with radius " << num << " is: ";
   cout << AREA_CIRCLE(num) << endl;

   cout << "Enter another integer: ";
   int num2 = 0;
   cin >> num2;

   cout << "MIN(" << num << ", " << num2 << ") = ";
   cout << MIN(num, num2) << endl;

   cout << "MAX(" << num << ", " << num2 << ") = ";
   cout << MAX(num, num2) << endl;

   return 0;
}
