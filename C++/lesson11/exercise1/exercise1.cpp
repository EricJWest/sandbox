/* Lesson 11, Exercise 1
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <math.h>
using namespace std;

class Shape
{
private:

public:
   Shape()
   {
      cout << "Shape constructor: created a new shape" << endl;
   }

   virtual double Area() = 0; // pure virtual method

   virtual void Print() = 0; // pure virtual method

   ~Shape()
   {
      cout << "Shape destructor: destroyed a shape" << endl;
   };

};

class Circle: public Shape
{
private:
   double radius;
   const double Pi = 3.141592654;

public:
   Circle(double inRadius): radius(inRadius) // constructor
   {
      cout << "Circle constructor: created a circle with radius " << radius << endl;
   }

   double Area()
   {
      return Pi*radius*radius;
   }

   void Print()
   {
      cout << "Circle says: I am a circle!" << endl;
   }

   ~Circle() // destructor
   {
      cout << "Circle destructor: destroyed a circle with radius " << radius << endl;
   };
};

class Triangle: public Shape
{
private:
   double side1, side2, side3;

public:
   Triangle(double inSide1, double inSide2, double inSide3)
   :side1(inSide1), side2(inSide2), side3(inSide3) // constructor
   {
      cout << "Triangle constructor: created a triangle with sides ";
      cout << side1 << ", " << side2 << ", " << side3 << endl;
   }

   double Area()
   {
      double angle3, base, height, area;
      angle3 = acos((side1*side1 + side2*side2 - side3*side3)/(2*side1*side2));
      base = side1;
      height = side2*sin(angle3);
      area = 0.5*base*height;
      return area;
   }

   void Print()
   {
      cout << "Triangle says: I am a triangle!" << endl;
   }

   ~Triangle() // destructor
   {
      cout << "Triangle destructor: destroyed a triangle with sides ";
      cout << side1 << ", " << side2 << ", " << side3 << endl;
   };
};

int main()
{
   Circle myCirc(2.4);
   cout << "Area of triangle is: " << myCirc.Area() << endl;
   myCirc.Print();

   cout << endl;

   Triangle myTri(1, 2, 3);
   cout << "Area of circle is: " << myTri.Area() << endl;
   myTri.Print();

   cout << endl;

   return 0;
};
