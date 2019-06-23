/* Listing 11.7: Demonstration of the Diamond Problem
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Animal
{
public:
   Animal()
   {
      cout << "Animal constructor" << endl;
   }

   // sample member
   int age;
};

class Mammal: public Animal
{
public:
   Mammal()
   {
      cout << "Mammal constructor" << endl;
   }
};

class Bird: public Animal
{
public:
   Bird()
   {
      cout << "Bird constructor" << endl;
   }
};

class Reptile: public Animal
{
public:
   Reptile()
   {
      cout << "Reptile constructor" << endl;
   }
};

class Platypus: public Mammal, public Bird, public Reptile
{
public:
   Platypus()
   {
      cout << "Platypus constructor" << endl;
   }
};

int main()
{
   Platypus duckBilledP;

   // uncomment next line to see compile failure
   // age is ambiguous as there are three instances of base Animal
   // duckBilledP.age = 25;

   return 0;
}
