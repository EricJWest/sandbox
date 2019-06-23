/* Listing 10.7: Demonstrating the Order of Construction and Destruction of Base and Derived Classes
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class FishDummyMember
{
public:
   FishDummyMember() // constructor
   {
      cout << "FishDummyMember constructor" << endl;
   }

   ~FishDummyMember() // destructor
   {
      cout << "FishDummyMember destructor" << endl;
   }
};

class Fish
{
protected:
   FishDummyMember dummy;

public:
   Fish() // constructor
   {
      cout << "Fish constructor" << endl;
   }

   ~Fish() // destructor
   {
      cout << "Fish destructor" << endl;
   }
};

class TunaDummyMember
{
public:
   TunaDummyMember() // constructor
   {
      cout << "TunaDummyMember constructor" << endl;
   }

   ~TunaDummyMember() // destructor
   {
      cout << "TunaDummyMember destructor" << endl;
   }
};

class Tuna: public Fish
{
private:
   TunaDummyMember dummy;

public:
   Tuna() // constructor
   {
      cout << "Tuna constructor" << endl;
   }

   ~Tuna() // destructor
   {
      cout << "Tuna destructor" << endl;
   }
};

int main()
{
   Tuna myDinner;

   return 0;
}
