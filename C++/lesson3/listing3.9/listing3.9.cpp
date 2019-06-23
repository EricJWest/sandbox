/* Listing 3.9: Using Enumerated Values to Indicate Cardinal Wind Directions
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

enum CardinalDirections
{
   North = 25,
   South,
   East,
   West
};

int main()
{
   cout << "Displaying directions and their symbolic value" << endl;
   cout << "North, " << North << endl;
   cout << "South, " << South << endl;
   cout << "East, " << East << endl;
   cout << "West, " << West << endl;

   CardinalDirections windDirection = South;
   cout << "Variable windDirection = " << windDirection << endl;

   return 0;
}
