/* Listing 10.9: A Derived Class of a Derived Class with Protected Inheritance
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Motor
{
public:
   void SwitchIgnition()
   {
      cout << "Ignition ON" << endl;
   }

   void PumpFuel()
   {
      cout << "Fuel in cylinders" << endl;
   }

   void FireCylinders()
   {
      cout << "Vroooom" << endl;
   }
};

class Car: protected Motor // protected inheritance
{
public:
   void Move()
   {
      SwitchIgnition();
      PumpFuel();
      FireCylinders();
   }
};

class RaceCar: protected Car // protected inheritance
{
public:
   void Move()
   {
      // RaceCar has access to members of base Motor due to
      // "protected" inheritance between RaceCar and Car,
      // and between Car and Motor
      SwitchIgnition();
      PumpFuel();
      FireCylinders();
      FireCylinders();
      FireCylinders();
   }
};

int main()
{
   RaceCar myDreamCar;
   myDreamCar.Move();

   return 0;
}
