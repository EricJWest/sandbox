/* Listing 21.3 A Unary Predicate That Determines Whether 
   a Number Is a Multiple 
   
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

// A structure as a unary predicate
template <typename numType>
struct IsMultiple
{
   numType Divisor;

   IsMultiple (const numType& divisor)
   {
      Divisor = divisor;
   } 

   bool operator () (const numType& element) const
   {
      // Check if the divisor is a multiple of the divisor
      return ((element % Divisor) == 0);
   }
};
