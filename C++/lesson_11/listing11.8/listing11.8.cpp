/* Listing 11.8: Demonstrating How Virtual Inheritance Solves the Diamond Problem
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

class Mammal: public virtual Animal
{
public:
   Mammal()
   {
      cout << "Mammal constructor" << endl;
   }
};

class Bird: public virtual Animal
{
public:
   Bird()
   {
      cout << "Bird constructor" << endl;
   }
};

class Reptile: public virtual Animal
{
public:
   Reptile()
   {
      cout << "Reptile constructor" << endl;
   }
};

class Platypus final: public Mammal, public Bird, public Reptile
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

   // no compile error as there is only one Animal::age
   duckBilledP.age = 25;
   cout << "duckBilledP has age " << duckBilledP.age << endl;

   return 0;
}
