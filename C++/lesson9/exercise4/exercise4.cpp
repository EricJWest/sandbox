/* Lesson 9, Exercise 4
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Circle
{
private:
   const double Pi = 22.0/7 ;
   double radius;

public:
   Circle(double inputRadius):radius(inputRadius)
   {
      cout << "Constructed a circle with radius " << radius << endl;
   }

   double GetArea()
   {
      return Pi*radius*radius;
   }

   double GetCircumference()
   {
      return 2*Pi*radius;
   }
};

int main()
{
   cout << "Enter a radius: ";
   double myRadius = 0;
   cin >> myRadius;

   Circle myCirc(myRadius);
   cout << "Area of circle is: " << myCirc.GetArea() << endl;
   cout << "Circumference of circle is: " << myCirc.GetCircumference() << endl;

   return 0;
}
