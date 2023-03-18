/* Listing 9.1: Introduction to Classes and Objects
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
   string name;
   int age;

   void IntroduceSelf()
   {
      cout << "I am " + name << " and am ";
      cout << age << " years old" << endl;
   }
};

int main()
{
   // An object of class Human with attribute name as "Adam"
   Human firstMan;
   firstMan.name = "Adam";
   firstMan.age = 30;

   // An object of class Human with attribute name as "Eve"
   Human firstWoman;
   firstWoman.name = "Eve";
   firstWoman.age = 28;

   firstMan.IntroduceSelf();
   firstWoman.IntroduceSelf();

   return 0;
}
