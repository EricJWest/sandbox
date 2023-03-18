/* Listing 21.5 Using a Binary Function to Multiply Two Ranges
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template <typename elementType>
class Multiply
{
public:
   elementType operator () (const elementType& elem1,
		            const elementType& elem2)
   {
      return (elem1 * elem2);
   }
};

int main()
{
   vector <int> multiplicands{ 0, 1, 2, 3, 4 };
   vector <int> multipliers{ 100, 101, 102, 103, 104 };

   // A third container that holds the result of the multiplication
   vector <int> vecResult;

   // Make space for the result of the multiplication
   vecResult.resize (multipliers.size());
   transform (multiplicands.begin(),
	      multiplicands.end(),
	      multipliers.begin(),
	      vecResult.begin(),
	      Multiply<int>() );

   cout << "The contents of the first vector are: " << endl;
   for (size_t index = 0; index < multiplicands.size(); ++index)
      cout << multiplicands[index] << ' ';
   cout << endl << endl;

   cout << "The contents of the second vector are: " << endl;
   for (size_t index = 0; index < multiplicands.size(); ++index)
      cout << multipliers[index] << ' ';
   cout << endl << endl;

   cout << "The result of the multiplication is: " << endl;
   for (size_t index = 0; index < multiplicands.size(); ++index)
      cout << vecResult[index] << ' ';
   cout << endl;

   return 0;
}
