/* Lesson 5, Exercise 3
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
   cout << "Enter true (1) or false (0) for two operands: " << endl;
   bool op1 = false, op2 = false;
   cin >> op1;
   cin >> op2;
   cout << endl;

   cout << "Bitwise NOT (~):" << endl;
   bitset<8> bitwiseNOT_op1 = (~op1);
   bitset<8> bitwiseNOT_op2 = (~op2);
   cout << "~" << op1 << " = " << bitwiseNOT_op1 << endl;
   cout << "~" << op2 << " = " << bitwiseNOT_op2 << endl;
   cout << endl;

   cout << "Bitwise AND (&):" << endl;
   bitset<8> bitwiseAND = (op1 & op2);
   cout << op1 << " & " << op2 << " = " << bitwiseAND << endl;
   cout << endl;

   cout << "Bitwise OR (|):" << endl;
   bitset<8> bitwiseOR = (op1 | op2);
   cout << op1 << " | " << op2 << " = " << bitwiseOR << endl;
   cout << endl;

   cout << "Bitwise XOR (^):" << endl;
   bitset<8> bitwiseXOR = (op1 ^ op2);
   cout << op1 << " ^ " << op2 << " = " << bitwiseXOR << endl;
   cout << endl;

   return 0;
}
