/* Listing 10.6: Example of a Derived Class Hiding a Method in a Base Class
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Fish
{
public:
   void Swim()
   {
      cout << "Fish swims... !" << endl;
   }

   void Swim(bool isFreshWaterFish) // overloaded version of Swim()
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
   void Swim() // hide class Fish's version of Swim()
   {
      cout << "Tuna swims real fast" << endl;
   }
};

int main()
{
   Tuna myDinner;

   cout << "About my food:" << endl;

   // myDinner.Swim(false); // compiler error: Tuna::Swim() hides Fish::Swim(bool)
   myDinner.Swim(); // invoking Swim() from class Tuna
   myDinner.Fish::Swim(); // invoking Swim() from class Fish

   return 0;
}
