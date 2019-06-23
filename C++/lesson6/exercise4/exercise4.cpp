/* Lesson 6, Exercise 4
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <string>
using namespace std;

int main()
{
   enum RainbowColors
   {
      Violet = 11,
      Indigo = 5,
      Blue = 1,
      Green = 4,
      Yellow = 12,
      Orange = 7,
      Red = 9
   };

   cout << "Which of the following are colors in the rainbow?" << endl;
   cout << "[0] Aqua" << endl;
   cout << "[1] Blue" << endl;
   cout << "[2] Cyan" << endl;
   cout << "[3] Fusia" << endl;
   cout << "[4] Green" << endl;
   cout << "[5] Indigo" << endl;
   cout << "[6] Maroon" << endl;
   cout << "[7] Orange" << endl;
   cout << "[8] Purple" << endl;
   cout << "[9] Red" << endl;
   cout << "[10] Turquois" << endl;
   cout << "[11] Violet" << endl;
   cout << "[12] Yellow" << endl;
   cout << "Enter a number corresponding to a color above: ";

   int colorInput; // initialize to red
   cin >> colorInput;

   switch (colorInput)
   {
   case Violet:
      cout << "Yes, violet is one of the colors in the rainbow." << endl;
      break;

   case Indigo:
      cout << "Yes, indigo is one of the colors in the rainbow." << endl;
      break;

   case Blue:
      cout << "Yes, blue is one of the colors in the rainbow." << endl;
      break;

   case Green:
      cout << "Yes, green is one of the colors in the rainbow." << endl;
      break;

   case Yellow:
      cout << "Yes, yellow is one of the colors in the rainbow." << endl;
      break;

   case Orange:
      cout << "Yes, orange is one of the colors in the rainbow." << endl;
      break;

   case Red:
      cout << "Yes, red is one of the colors in the rainbow." << endl;
      break;

   default:
      cout << "No, that is not one of the colors in the rainbow. Thanks for playing!" << endl;
      break;
   }

   return 0;
}
