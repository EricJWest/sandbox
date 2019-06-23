/* Listing 9.6: A Default Constructor with Initialization Lists
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
   string name;
   int age;

public:
   Human(string humansName = "Adam", int humansAge = 25)
        :name(humansName), age(humansAge)
   {
      cout << "Constructed a human called " << name;
      cout << ", " << age << " years old" << endl;
   }
};

int main()
{
   Human adam;
   Human eve("Eve", 18);

   return 0;
}
