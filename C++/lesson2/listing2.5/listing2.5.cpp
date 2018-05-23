/* Listing 2.5
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

//Declare and definte a function
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
    // Call the function
    return DemoConsoleOutput();
}
