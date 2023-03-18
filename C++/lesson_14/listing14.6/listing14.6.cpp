/* Listing 14.6: Demonstrating the Effect of Static Variables on Template Classes and Class Instances
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

template <typename T>
class TestStatic
{
public:
   static int staticVal;
};

// static member initialization
template<typename T> int
TestStatic<T>::staticVal;

int main()
{
   TestStatic<int> intInstance;
   cout << "Setting staticVal for inInstance to 2011" << endl;
   intInstance.staticVal = 2011;

   TestStatic<double> dblInstance;
   cout << "Setting staticVal for dblInstance to 1011" << endl;
   dblInstance.staticVal = 1011;

   cout << "intInstance.staticVal = " << intInstance.staticVal << endl;
   cout << "dblInstance.staticVal = " << dblInstance.staticVal << endl;

   return 0;
}
