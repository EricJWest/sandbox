/* Listing 10.2: Demonstrating the Use of the 'protected' Keyword
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Fish
{
protected:
   bool isFreshWaterFish; // accessible only to derived classes

public:
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
      isFreshWaterFish = false; // set protected member in base
   }
};

class Carp: public Fish
{
public:
   Carp()
   {
      isFreshWaterFish = true; // set protected member in base
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

   // uncomment line below to see that protected members
   // are not accessible from outside the class heirarchy
   // myLunch.isFreshWaterFish = false; // compiler error

   return 0;
}
