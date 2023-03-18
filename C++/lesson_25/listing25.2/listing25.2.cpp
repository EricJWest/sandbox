/* Listing 25.2 Performing Logical Operations Using a Bitset

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main()
{
   bitset <8> inputBits;
   cout << "Enter a 8-bit sequence: ";

   cin >> inputBits;  // store user input bitset

   cout << "Num 1s you supplied: " << inputBits.count() << endl;
   cout << "Num 0s you supplied: ";
   cout << inputBits.size() - inputBits.count() << endl;
   
   bitset <8> inputFlipped (inputBits); // copy
   inputFlipped.flip(); // toggle the bits

   cout << "Flipped version is: " << inputFlipped << endl;

   cout << "Result of AND, OR, and XOR between the two: " << endl;
   cout << inputBits << " & " << inputFlipped << " = ";
   cout << (inputBits & inputFlipped) << endl; // bitwise AND
   
   cout << inputBits << " | " << inputFlipped << " = ";
   cout << (inputBits | inputFlipped) << endl; // bitwise AND
   
   cout << inputBits << " ^ " << inputFlipped << " = ";
   cout << (inputBits ^ inputFlipped) << endl; // bitwise AND

   return 0;
}
