/* Listing 11.6: An Example of an Abstract Base Class
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Fish // abstract base class
{
public:
   virtual void Swim() = 0; // pure virtual function, Swim()

};

class Tuna: public Fish
{
public:
   void Swim() // required implementation of Swim()
   {
      cout << "Tuna swims fast in the sea! " << endl;
   }
};

class Carp: public Fish
{
public:
   void Swim() // required implementation of Swim()
   {
      cout << "Carp swims slow in the lake! " << endl;
   }
};

void MakeFishSwim(Fish& inputFish)
{
   inputFish.Swim();
}

int main()
{
   // Fish myFish; // compiler error: cannot instantiate an abstract base class
   Carp myLunch;
   Tuna myDinner;

   myLunch.Swim(); // invokes Carp::Swim() directly
   myDinner.Swim(); // invokes Tuna::Swim() directly

   MakeFishSwim(myLunch); // invokes Carp::Swim()
   MakeFishSwim(myDinner); // invokes Tuna::Swim()

   return 0;
}
