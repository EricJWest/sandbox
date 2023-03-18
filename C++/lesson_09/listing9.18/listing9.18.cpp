/* Listing 9.18: Demonstrating the Use of 'constexpr' with Classes
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Human
{
   int age;

public:
   constexpr Human(int humansAge) : age(humansAge) {}
   constexpr int GetAge() const { return age; }
};

int main()
{
   constexpr Human somePerson(15); // constant expression
   const int hisAge = somePerson.GetAge();
   cout << "somePerson's age: " << hisAge << endl;

   Human anotherPerson(45); // not constant expression
   int anotherAge = anotherPerson.GetAge();
   cout << "anotherPerson's age: " << anotherAge << endl;

   return 0;
}

