/* Listing 28.5 Custom Exception Class That Inherits 
   from 'std::exception'

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <exception>
#include <string>
using namespace std;

class CustomException: public std::exception
{
   string reason;
public:
   //constructor, needs reason
   CustomException (const char* why):reason(why) {}

   // redefining virtual function to return 'reason'
   virtual const char* what() const throw()
   {
      return reason.c_str();
   }
};

double Divide(double dividend, double divisor)
{
   if (divisor == 0)
      throw CustomException("CustomException: Dividing by 0 is a crime");

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
      cout << "Result is: " << Divide(dividend, divisor) << endl;
   }
   catch(exception& exp) // catch CustomException, bad_alloc, etc
   {
      cout << exp.what() << endl;
      cout << "Sorry, can't continue!" << endl;
   }

   return 0;
}
