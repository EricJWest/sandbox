/* Listing 9.3: Using a Constructor to Initialize Class Member Variables
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
   Human() // constructor
   {
      age = 1; // initialization
      cout << "Constructed an instance of class Human" << endl;
   }

   void SetName(string humansName)
   {
      name = humansName;
   }

   void SetAge(int humansAge)
   {
      age = humansAge;
   }

   void IntroduceSelf()
   {
      cout << "I am " + name << " and am ";
      cout << age << " years old" << endl;
   }
};

int main()
{
   Human firstWoman;
   firstWoman.SetName("Eve");
   firstWoman.SetAge(28);

   firstWoman.IntroduceSelf();
}
