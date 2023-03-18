/* Listing 11.1: Demonstrating the Need for Polymorphism
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Fish
{
public:
   void Swim()
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

void MakeFishSwim (Fish& inputFish) // passing argument by reference
{
   // calling Fish::Swim
   inputFish.Swim();
}

int main()
{
   Tuna myDinner;

   myDinner.Swim(); // invokes Tuna::Fish()
   MakeFishSwim(myDinner); // invokes Fish::Swim(), which may not be desired
   // this happens because myDinner is passed by reference as Fish to MakeFishSwim,
   // which only copies information in Fish, not Tuna (a process called "slicing", see p.297)

   return 0;
}
