/* Listing 22.4 Lambda Expression as a Binary Function to 
   Multiply Elements from Two Containers and Store in a Third

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
   vector <int> vecMultiplicand{ 0, 1, 2, 3, 4 };
   vector <int> vecMultiplier{ 100, 101, 102, 103, 104 };

   // Holds the result of multiplication
   vector <int> vecResult;

   // Make space for the result of the multiplication
   vecResult.resize(vecMultiplier.size());
   
   transform (vecMultiplicand.begin(),
              vecMultiplicand.end(),
	      vecMultiplier.begin(),
	      vecResult.begin(),
	      [] (int a, int b) {return a*b;} );

   cout << "The contents of the first vector are: " << endl;
   for (size_t index = 0; index < vecMultiplicand.size(); ++index)
      cout << vecMultiplicand[index] << ' ';
   cout << endl << endl;

   cout << "The contents of the second vector are: " << endl;
   for (size_t index = 0; index < vecMultiplier.size(); ++index)
      cout << vecMultiplier[index] << ' ';
   cout << endl << endl;

   cout << "The result of the multiplication is: " << endl;
   for (size_t index = 0; index < vecResult.size(); ++index)
      cout << vecResult[index] << ' ';
   cout << endl << endl;

   return 0;
}
