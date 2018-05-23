/* Listing 10.10
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Mammal
{
public:
   void FeedBabyMilk()
   {
      cout << "Mammal: Baby says glug!" << endl;
   }
};

class Reptile
{
public:
   void SpitVenom()
   {
      cout << "Reptile: Shoo enemy! Spits venom!" << endl;
   }
};

class Bird
{
public:
   void LayEggs()
   {
      cout << "Bird: Laid my eggs, am lighter now!" << endl;
   }
};

class Platypus: public Mammal, public Reptile, public Bird
{
public:
   void Swim()
   {
      cout << "Platypus: Voila, I can swim!" << endl;
   }
};

int main()
{
   Platypus realFreak;
   realFreak.LayEggs();
   realFreak.FeedBabyMilk();
   realFreak.SpitVenom();
   realFreak.Swim();

   return 0;
}
