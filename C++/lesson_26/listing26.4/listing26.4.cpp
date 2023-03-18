/* Listing 26.4 Using 'std::unique_ptr'
   
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */
#include <iostream>
#include <memory> // include this to use std::unique_ptr
using namespace std;

class Fish
{
public:
   Fish() {cout << "Fish: Constructed!" << endl;}
   ~Fish() {cout << "Fish: Destructed!" << endl;}

   void Swim() const {cout << "Fishswims in water" << endl;}
};

void MakeFishSwim (const unique_ptr<Fish>& inFish)
{
   inFish->Swim();
}

int main()
{
   unique_ptr<Fish> smartFish (new Fish);

   smartFish->Swim();
   MakeFishSwim(smartFish); // OK, as MakeFishSwim accepts reference

   unique_ptr<Fish> copySmartFish;
   //copySmartFish = smartFish; // error: operator= is private
   
   return 0;
}
