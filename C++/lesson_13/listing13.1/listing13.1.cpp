/* Listing 13.1: Demonstrating the Use of Dynamic Casting in Runtime Type Identification
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Fish
{
public:
   virtual void Swim()
   {
      cout << "Fish swims in water" << endl;
   }

   // base class should always have a virtual destructor
   virtual ~Fish() {}
};

class Tuna: public Fish
{
public:
   void Swim()
   {
      cout << "Tuna swims real fast in the sea" << endl;
   }

   void BecomeDinner()
   {
      cout << "Tuna became dinner in sushi" << endl;
   }
};

class Carp: public Fish
{
public:
   void Swim()
   {
      cout << "Carp swims real slow in the lake" << endl;
   }

   void Talk()
   {
      cout << "Carp talked Carp!" << endl;
   }
};

void DetectFishType(Fish* objFish)
{
   Tuna* objTuna = dynamic_cast<Tuna*>(objFish);
   if (objTuna) // check success of cast
   {
      cout << "Detected Tuna. Making Tuna dinner: " << endl;
      objTuna->BecomeDinner();
   }

   Carp* objCarp = dynamic_cast<Carp*>(objFish);
   if (objCarp) // check success of cast
   {
      cout << "Detected Carp. Making carp talk: " << endl;
      objCarp->Talk();
   }

   cout << "Verifying type using virtual Fish::Swim: " << endl;
   objFish->Swim(); // calling virtual function Swim
}

int main()
{
   Tuna myDinner;
   Carp myLunch;

   DetectFishType(&myDinner);
   cout << endl;
   DetectFishType(&myLunch);

   return 0;
}
