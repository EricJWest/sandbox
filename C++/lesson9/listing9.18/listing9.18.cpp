/* Listing 9.18
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Human
{
   int age;

public:
   constexpr Human(int humansAge) : age(humansAge) {}
   constexpr int GetAge() const { return age;}
};

int main()
{
   constexpr Human somePerson(15);
   const int hisAge = somePerson.GetAge();

   Human anotherPerson(45); // not constant expression

   return 0;
}

