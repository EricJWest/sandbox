/* Listing 5.7
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

   bitset<8> inputBits (inputNum);
   cout << inputNum << " in binary is " << inputBits << endl;
   cout << endl;

   bitset<8> bitwiseNOT = (~inputNum);
   cout << "Logical NOT ~:" << endl;
   cout << "~" << inputBits << " = " << bitwiseNOT << endl;
   cout << endl;

   cout << "Logical AND, & with 00001111:" << endl;
   bitset<8> bitwiseAND = (0x0F & inputNum); //0x0F is hex for 00001111
   cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;
   cout << endl;

   cout << "Logical OR, | with 00001111:" << endl;
   bitset<8> bitwiseOR = (0x0F | inputNum); //0x0F is hex for 00001111
   cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;
   cout << endl;

   cout << "Logical XOR, ^ with 00001111:" << endl;
   bitset<8> bitwiseXOR = (0x0F ^ inputNum); //0x0F is hex for 00001111
   cout << "00001111 ^ " << inputBits << " = " << bitwiseXOR << endl;

   return 0;
}
