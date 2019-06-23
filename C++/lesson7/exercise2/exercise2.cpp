/* Lesson 7, Exercise 2
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;


void DisplayArray(double numbers[], int length)
{
   for (int index = 0; index < length ; ++index)
      cout << numbers[index] << " ";

   cout << endl;
}

int main()
{
   double myNums[4] = {24.0, 58.0, -1.0, 37.0};
   DisplayArray(myNums, 4);

   return 0;
}
