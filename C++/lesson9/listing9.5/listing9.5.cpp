/* Listing 9.5: A Class with an Overloaded Constructor and No Default Constructor
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
   Human(string humansName, int humansAge)
   {
      name = humansName;
      age = humansAge;
      cout << "Overloaded constructor creates ";
      cout << name << " of age " << age << endl;
   }

   void IntroduceSelf()
   {
      cout << "I am " + name << " and am ";
      cout << age << " years old" << endl;
   }
};

int main()
{
   Human firstMan("Adam", 25);
   Human firstWoman("Eve", 28);

   firstMan.IntroduceSelf();
   firstWoman.IntroduceSelf();
}
