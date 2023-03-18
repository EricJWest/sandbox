/* Lesson 8, Exercise 1
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

int main()
{
   int number = 3;

   int* pNum1 = &number;
   cout << "after pNum1 = &number:" << endl;
   cout << "pNum1 = " << pNum1 << endl;
   cout << "*pNum1 = " << *pNum1 << endl;
   cout << endl;

   *pNum1 = 20;
   cout << "after *pNum1 = 20:" << endl;
   cout << "pNum1 = " << pNum1 << endl;
   cout << "*pNum1 = " << *pNum1 << endl;
   cout << endl;

   int* pNum2 = pNum1;
   cout << "after pNum2 = pNum1:" << endl;
   cout << "pNum2 = " << pNum2 << endl;
   cout << "*pNum2 = " << *pNum2 << endl;
   cout << endl;

   number *= 2;
   cout << "after number *= 2:" << endl;
   cout << "number = " << number << endl;
   cout << "&number = " << &number << endl;
   cout << "pNum1 = " << pNum1 << endl;
   cout << "*pNum1 = " << *pNum1 << endl;
   cout << "pNum2 = " << pNum2 << endl;
   cout << "*pNum2 = " << *pNum2 << endl;
   cout << endl;

   return 0;
}
