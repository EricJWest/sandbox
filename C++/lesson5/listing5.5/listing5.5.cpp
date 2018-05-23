/* Listing 5.5
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "Use boolean values (0 / 1) to answer the questions" << endl;
   cout << "Is it raining? ";
   bool isRaining = false;
   cin >> isRaining;

   cout << "Do you have buses on the street? ";
   bool busesPly = false;
   cin >> busesPly;

   // Conditional statement uses logical AND and NOT
   if (isRaining && !busesPly)
     cout << "You cannot go to work" << endl;
   else
     cout << "You can go to work" << endl;

   if (isRaining && busesPly)
     cout << "Take an umbrella" << endl;

   if ((!isRaining) && busesPly)
     cout << "Enjot the sun and have a nice day" << endl;

   return 0;
}
