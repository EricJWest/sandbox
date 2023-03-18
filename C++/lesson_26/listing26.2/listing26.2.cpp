/* Listing 26.2 Using a Deep-Copy-Based Smart Pointer to Pass 
   Polymorphic Objects by Thier Base Types
   
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

template <typename T>
class deepcopy_smart_ptr
{
private:
   T* object;
public:
   //... other functions
   
   // copy constructor of the deepcopy pointer
   deepcopy_smart_ptr (const deepcopy_smart_ptr& source);
   {
      // Clone() is virtual: ensures deep copy of Derived class object
      object = source->Clone();
   }

   // copy assignment operator
   deepcopy_smart_ptr& operator= (const deepcopy_smart_ptr& source)
   {
      if (object)
         delete object;

      object = source->Clone();
   }
};
