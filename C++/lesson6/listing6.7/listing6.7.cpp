/* Listing 6.7
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
Start:
   cout << "Enter two integers: " << endl;
   int num1 = 0, num2 = 0;
   cin >> num1;
   cin >> num2;

   cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;
   cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

   cout << "Do you wish to perform another operation (y/n)?" << endl;
   char repeat = 'y';
   cin >> repeat;

   if (repeat == 'y')
      goto Start;

   cout << "Well, it was fun while it lasted. Goodbye!" << endl;

   return 0;
}
