/* Listing 23.5 Using 'generate()' and 'generate_n()' to 
   Initialize Collections to Random Values

   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <ctime>
using namespace std;

int main()
{
   srand(time(NULL)); // seed random generator using time

   vector <int> numsInVec (5);
   generate (numsInVec.begin(), numsInVec.end(), rand);

   cout << "Elements in the vector are: ";
   for (size_t index = 0; index < numsInVec.size(); ++index)
      cout << numsInVec[index] << ' ';
   cout << endl;

   list <int> numsInList (5);
   generate_n (numsInList.begin(), 3, rand);

   cout << "Elements in the list are: ";
   for (auto element = numsInList.begin();
	     element != numsInList.end();
	     ++element)
      cout << *element << ' ';
   cout << endl;

   return 0;
}
