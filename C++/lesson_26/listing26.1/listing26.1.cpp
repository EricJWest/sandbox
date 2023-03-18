/* Listing 26.1 The Minimal Essential Components of 
   a Smart Pointer
   
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

template <typename T>
class smart_pointer
{
private:
   T* rawPtr;
public:
   smart_pointer (T* pData) : rawPtr(pData) {} // constructor
   ~smart_pointer () {delete rawPtr;};         // destructor

   // copy constructor
   smart_pointer (const smart_pointer & anotherSP);
   // copy assignment operator
   smart_pointer& operator= (const smart_pointer& anotherSP);

   T& operator* () const // dereferencing operator
   {
      return *(rawPtr);
   }

   T* operator-> () const  // member selection operator
   {
      return rawPtr;
   }
};
