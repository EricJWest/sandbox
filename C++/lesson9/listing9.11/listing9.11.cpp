/* Listing 9.11
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
      delete pInstance; // member can invoke private destructor
   }

   void DoSomething() {} // sample empty member method
};

int main()
{
   MonsterDB* myDB = new MonsterDB(); // on heap
   myDB->DoSomething();

   // uncomment next line to se compile failure
   // delete myDB; // private destructor cannot be invoked

   // use static member to release memory
   MonsterDB::DestroyInstance(myDB);

   return 0;
}
