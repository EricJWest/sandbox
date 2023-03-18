/* Listing 14.9:
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

template <typename T>
class EverythingButInt
{
public:
   EverythingButInt()
   {
      static_assert(sizeof(T) != sizeof(int), "No int please!");
   }
};

int main()
{
   EverythingButInt<int> test; // template instantiation with int, compiler error!
//   EverythingButInt<double> test; // template instantiation with double, OK!

   return 0;
}
