/* Listing 10.1: Example of a Simple Inheritance Hierarchy
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Fish
{
public:
   bool isFreshWaterFish;

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
   Tuna()
   {
      isFreshWaterFish = false;
   }
};

class Carp: public Fish
{
public:
   Carp()
   {
      isFreshWaterFish = true;
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
