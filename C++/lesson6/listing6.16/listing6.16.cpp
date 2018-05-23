/* Listing 6.16
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   const int numsToCalculate = 5;
   cout << "This program will calculate " << numsToCalculate \
        << " Fibonacci Numers at a time" << endl;

   int num1 = 0, num2 = 1;
   char wantMore = '\0';
   cout << num1 << " " << num2 << " ";

   do
   {
      for (int counter = 0; counter < numsToCalculate; ++counter)
      {
         cout << num1 + num2 << " ";

         int num2Temp = num2;
         num2 = num1 + num2;
         num1 = num2Temp;
      }

      cout << endl << "Do you want more numbers (y/n)? ";
      cin >> wantMore;
   } while(wantMore == 'y');

    cout << "Well, it was fun while it lasted. Goodbye!" << endl;

   return 0;
}
