/* Listing 14.3: Demonstrating the Use of Template Functions
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

template <typename Type>
const Type& GetMax(const Type& value1, const Type& value2)
{
   if (value1 > value2)
      return value1;
   else
      return value2;
}

template <typename Type>
void DisplayComparison(const Type& value1, const Type& value2)
{
   cout << "GetMax(" << value1 << ", " << value2 << ") = ";
   cout << GetMax(value1, value2) << endl;
}

int main()
{
   int num1 = -101;
   int num2 = 2011;
   DisplayComparison(num1, num2);

   double d1 = 3.14;
   double d2 = 3.1416;
   DisplayComparison(d1, d2);

   string name1 = "Jack";
   string name2 = "John";
   DisplayComparison(name1, name2);

   return 0;
}
