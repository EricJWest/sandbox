/* Listing 28.3 Throwing a Custom Exception at an Attempt 
   to Divide by Zero

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

double Divide (double dividend, double divisor)
{
   if (divisor == 0)
      throw "Dividing by 0 is a crime";

   return (dividend / divisor);
}

int main()
{
   cout << "Enter dividend: ";
   double dividend = 0;
   cin >> dividend;

   cout << "Enter divisor: ";
   double divisor = 0;
   cin >> divisor;

   try
   {
      cout << "Result is: " << Divide(dividend, divisor);
      cout << endl;
   }  
   catch (const char* exp)
   {
      cout << "Exception: " << exp << endl;
      cout << "Got to end, sorry!" << endl;
   }

   return 0;
}
