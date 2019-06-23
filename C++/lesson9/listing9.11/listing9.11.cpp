/* Listing 9.11: A Class That Prohibits Instantiation on the Stack
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

class MonsterDB
{
private:
   ~MonsterDB() {}; // private destructor prevents instances on stack

public:
   static void DestroyInstance(MonsterDB* pInstance)
   {
      delete pInstance; // class member can invoke private destructor
   }

   void DoSomething() {} // sample empty member method
};

int main()
{
   MonsterDB* myDB = new MonsterDB(); // on heap
   (*myDB).DoSomething();
   //myDB->DoSomething(); // alternative way to invoke DoSomething()

   // uncomment next line to see compile failure
   // delete myDB; // private destructor cannot be invoked (compiler error)

   // use static member to release memory
   MonsterDB::DestroyInstance(myDB);

   return 0;
}
