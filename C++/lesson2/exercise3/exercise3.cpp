/* Lesson 2, Exercise 3
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

//Declare a function
int DemoConsoleOutput();

int main()
{
    // Call the function
    DemoConsoleOutput();

    return 0;
}

// Define the previously declared function
int DemoConsoleOutput()
{
    cout << "Addition:       10 + 5 = " << 10 + 5 << endl;
    cout << "Subtraction:    10 - 5 = " << 10 - 5 << endl;
    cout << "Multiplication: 10 * 5 = " << 10 * 5 << endl;
    cout << "Division:       10 / 5 = " << 10 / 5 << endl;

    return 0;
}
