/* Listing 27.2 Using 'cout' to Display 'Pi' and a Circle's 
   Area Using Fixed-Point and Scientific Notations

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const double Pi = (double) 22.0 / 7;
   cout << "Pi = " << Pi << endl;
   
   cout << endl << "Setting precision to 7: " << endl;
   cout << setprecision(7);
   cout << "Pi = " << Pi << endl;
   cout << fixed << "Fixed Pi = " << Pi << endl;
   cout << scientific << "Scientific Pi = " << Pi << endl;

   cout << endl << "Setting precision to 10: " << endl;
   cout << setprecision(10);
   cout << "Pi = " << Pi << endl;
   cout << fixed << "Fixed Pi = " << Pi << endl;
   cout << scientific << "Scientific Pi = " << Pi << endl;

   cout << endl << "Enter a radius: ";
   double radius = 0.0;
   cin >> radius;
   cout << "Area of circle: " << 2*Pi*radius*radius << endl;

   return 0;
}
