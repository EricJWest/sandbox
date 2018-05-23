/* Listing 9.4
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
   Human() // default constructor
   {
      age = 0; // initialization
      cout << "Default constructor: name and age not set" << endl;
   }

   Human(string humansName, int humansAge) // overloaded
   {
      name = humansName;
      age = humansAge;
      cout << "Overloaded constructor creates ";
      cout << name << " of " << age << " years" << endl;
   }
};

int main()
{
   Human firstMan; // use default constructor
   Human firstWoman("Eve", 20); // use overloaded constructor
}
