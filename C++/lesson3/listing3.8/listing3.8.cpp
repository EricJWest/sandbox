/* Listing 3.8: Using 'constexpr' to Calculate Pi
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
constexpr double GetPi() { return 22.0 / 7; }
constexpr double TwicePi() { return 2 * GetPi(); }

int main()
{
   using namespace std;
   const double pi = 22.0 / 7;

   cout << "const pi contains the value: " << pi << endl;
   cout << "constexpr GetPi() returns the value: " << GetPi() << endl;
   cout << "constexpr TwicePi() returns the value: " << TwicePi() << endl;

   return 0;
}
