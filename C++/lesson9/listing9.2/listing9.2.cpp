/* Listing 9.2: Demonstrating Abstraction of Data via the Keyword 'private'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class Human
{
private:
   // Private member data:
   int age;

public:
   void SetAge(int inputAge)
   {
      age = inputAge;
   }

   // Human lies about his / her age (if over 30)
   int GetAge()
   {
      if (age > 30)
         return (age - 2);
      else
         return age;
   }
};

int main()
{
   Human firstMan;
   firstMan.SetAge(35);

   Human firstWoman;
   firstWoman.SetAge(22);

   cout << "Age of firstMan " << firstMan.GetAge() << endl;
   cout << "Age of firstWoman " << firstWoman.GetAge() << endl;

   return 0;
}
