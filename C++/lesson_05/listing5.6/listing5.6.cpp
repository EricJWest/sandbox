/* Listing 5.6: Using Logical NOT (!) and Logical OR (||) Operators in 'if' Satements for Conditional Processing
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   cout << "Answer questions with 0 or 1" << endl;
   cout << "Is there a discount on your favorite car? ";
   bool onDiscount = false;
   cin >> onDiscount;

   cout << "Did you get a fantastic bonus? ";
   bool fantasticBonus = false;
   cin >> fantasticBonus;

   if (onDiscount || fantasticBonus)
     cout << "Congratulations, you can buy that car!" << endl;
   else
     cout << "Sorry, waiting a while is a good idea" << endl;

   if (!onDiscount)
     cout << "Car not on discount" << endl;

   return 0;
}
