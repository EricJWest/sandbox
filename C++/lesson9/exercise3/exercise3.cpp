/* Lesson 9, Exercise 3
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Human
{
   int age;
   string name;

public:
   Human(int humansAge = 25, string humansName = "Adam")
        :age(humansAge), name(humansName)
   {
      cout << "Constructed a human called " << name;
      cout << ", " << age << " years old" << endl;
   }
};

int main()
{
   Human somePerson;

   return 0;
}
