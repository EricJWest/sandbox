/* Listing 5.7: Demonstrating the Use of Bitwise NOT (~), AND (&), OR (|), and XOR (^) Operators
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
   cout << "Enter a number (0 - 255): ";
   unsigned short inputNum = 0;
   cin >> inputNum;
   cout << endl;

   cout << "Convert to binary:" << endl;
   bitset<8> inputBits (inputNum);
   cout << inputNum << " in binary is " << inputBits << endl;
   cout << endl;

   cout << "Bitwise NOT (~):" << endl;
   bitset<8> bitwiseNOT = (~inputNum);
   cout << "~" << inputBits << " = " << bitwiseNOT << endl;
   cout << endl;

   cout << "Bitwise AND (&) with 00001111:" << endl;
   bitset<8> bitwiseAND = (0x0F & inputNum); //0x0F is hex for 00001111
   cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;
   cout << endl;

   cout << "Bitwise OR (|) with 00001111:" << endl;
   bitset<8> bitwiseOR = (0x0F | inputNum); //0x0F is hex for 00001111
   cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;
   cout << endl;

   cout << "Bitwise XOR (^) with 00001111:" << endl;
   bitset<8> bitwiseXOR = (0x0F ^ inputNum); //0x0F is hex for 00001111
   cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

   return 0;
}
