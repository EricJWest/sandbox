/* Listing 2.6
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Declare a variable to store an integer
    int inputNumber;

    cout << "Enter an integer: ";

    // Store the integer provided by user
    cin >> inputNumber;

    // Declare a variable to store a string
    string inputName;

    cout << "Enter your name: ";

    // Store the text provided by user
    cin >> inputName;

    // Print user input
    cout << inputName << " entered " << inputNumber << endl;

    return 0;
}
