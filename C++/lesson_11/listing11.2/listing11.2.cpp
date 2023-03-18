/* Listing 11.2: Demonstrating Virtual Functions Using the 'virtual' Keyword
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Fish
{
public:
   virtual void Swim()
   {
      cout << "Fish swims!" << endl;
   }
};

class Tuna: public Fish
{
public:
   void Swim() // overrides Fish::Swim
   {
      cout << "Tuna swims!" << endl;
   }
};

class Carp: public Fish
{
public:
   void Swim() // override Fish::Swim
   {
      cout << "Carp swims!" << endl;
   }
};

void MakeFishSwim (Fish& inputFish)
{
   // calling virtual method Swim()
   inputFish.Swim();
}

int main()
{
   Tuna myDinner;
   Carp myLunch;
   Fish myBreakfast;

   MakeFishSwim(myDinner); // invokes Tuna::Swim()
   MakeFishSwim(myLunch); // invokes Carp::Swim()
   MakeFishSwim(myBreakfast); // invokes Fish::Swim()

   return 0;
}
