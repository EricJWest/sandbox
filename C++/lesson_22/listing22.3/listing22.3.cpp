/* Listing 22.3 Demonstrating the Use of Lambda Expressions That 
   Hold State to Check Whether One Number Is Divisible by Another

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   vector <int> numsInVect{ 25, 26, 27, 28, 29, 30, 31 };
   cout << "The vector contains: {25, 26, 27, 28, 2<9, 30, 31}" << endl;
   cout << "Enter divisor (> 0): ";
   int divisor = 2;
   cin >> divisor;

   // Find the first element that is a multiple of divisor
   vector <int>::iterator element;
   element = find_if(numsInVect.begin(),
	             numsInVect.end(),
             [divisor] (int dividend) {return ((dividend % divisor) == 0); } ); 

   if (element != numsInVect.cend())
   {
      cout << "First element in vector divisible by " << divisor;
      cout << ": " << *element << endl;
   }

   return 0;
}
