/* Listing 10.4: Example of a Derived Class Overriding a Method in a Base Class
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Fish
{
private:
   bool isFreshWaterFish;

public:
   // Fish constructor
   Fish (bool isFreshWater) : isFreshWaterFish(isFreshWater){}

   void Swim()
   {
      if (isFreshWaterFish)
         cout << "Swims in lake" << endl;
      else
         cout << "Swims in sea" << endl;
   }
};

class Tuna: public Fish
{
public:
   Tuna(): Fish(false){} // constructor initializes base

   void Swim() // overrding Swim() in class Fish
   {
      cout << "Tuna swims real fast" << endl;
   }
};

class Carp: public Fish
{
public:
   Carp(): Fish(true){} // constructor initializes base

   void Swim() // overrding Swim() in class Fish
   {
      cout << "Carp swims real slow" << endl;
   }
};

int main()
{
   Carp myLunch;
   Tuna myDinner;

   cout << "About my food:" << endl;

   cout << "Lunch: ";
   myLunch.Swim();

   cout << "Dinner: ";
   myDinner.Swim();

   return 0;
}
