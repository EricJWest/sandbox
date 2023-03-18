/* Listing 17.8: Instantiating an STL deque and Using 'push_front()' and 'pop_front()'
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
   // Define a deque of integers
   deque <int> intDeque;

   // Insert integers at the bottom of the array
   intDeque.push_back (3);
   intDeque.push_back (4);
   intDeque.push_back (5);

   // Insert integers at the top of the array
   intDeque.push_front (2);
   intDeque.push_front (1);
   intDeque.push_front (0);

   cout << "The contents of the deque after inserting elements ";
   cout << "at the top and bottom are: " << endl;

   // Display contents on the screen
   for (size_t count = 0; count < intDeque.size(); ++ count)
   {
      cout << "Element [" << count << "] = ";
      cout << intDeque[count] << endl;
   }
   cout << endl;

   // Erase an element at the top
   intDeque.pop_front();

   // Erase an element at the bottom
   intDeque.pop_back();

   cout << "The contents of the deque after erasing an element ";
   cout << "from the top and bottom are: " << endl;

   // Display contents again: this time using iterators
   // if on older computers, remove auto and uncomment next line
   // deque <int>::iterator element;
   for (auto element = intDeque.begin(); element != intDeque.end(); ++element)
   {
      size_t Offset = distance (intDeque.begin(), element);
      cout << "Element [" << Offset << "] = " << *element << endl;
   }

   return 0;
}
