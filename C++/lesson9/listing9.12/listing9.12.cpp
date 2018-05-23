/* Listing 9.12
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Human
{
   int age;

public:
   // explicit constructor blocks implicit conversions
   explicit Human(int humansAge) : age(humansAge) {}
};

void DoSomething(Human person)
{
   cout << "Human sent did something" << endl;
   return;
}

int main()
{
   Human kid(10);  // explicit conversion is ok
   Human anotherKid = Human(11); // explicit, ok
   DoSomething(kid); // ok

   // Human anotherKid2 = 11; // failure: implicit converions not ok
   // DoSomething(10); // implicit conversion, not ok

   return 0;
}
