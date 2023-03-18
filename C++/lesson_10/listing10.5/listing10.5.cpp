/* Listing 10.5: Ivoking Methods of a Base Class in a Derived Class
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

   void Swim() // overriding Fish::Swim()
   {
      cout << "Tuna swims real fast" << endl;
   }
};

class Carp: public Fish
{
public:
   Carp(): Fish(true){} // constructor initializes base

   void Swim() // overriding Fish::Swim()
   {
      cout << "Carp swims real slow" << endl;
      Fish::Swim(); // invoking Swim() from class Fish
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
   myDinner.Swim(); // invoking Swim() from class Tuna
   myDinner.Fish::Swim(); // invoking Swim() from class Fish

   return 0;
}
