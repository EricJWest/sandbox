/* Listing 2.5: Using the Return Value of a Function
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

// Function declaration and definition
int DemoConsoleOutput()
{
    cout << "This is a simple string literal" << endl;
    cout << "Writing the number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi is approximately 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi is approximately 22 / 7 = " << 22.0 / 7 << endl;

    return 0;
}

int main()
{
    // Function call with return used to exit
    return DemoConsoleOutput();
}
