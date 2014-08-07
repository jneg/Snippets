/*
   99 Bottles of Beer on the Wall Program
*/

#include <cstdint>
#include <iostream>
#include <string>

int main()
{
   for(std::int16_t b=99; b!=0; --b)
   {
      std::cout << b << (b==1 ? " bottle" : " bottles") << " of beer on the wall, " << b << (b==1 ? " bottle" : " bottles") << " of beer." << std::endl;
      std::cout << "Take one down and pass it around, " << (b-1==0 ? "no more" : std::to_string(b-1)) << (b-1==1 ? " bottle" : " bottles") << " of beer on the wall.\n" << std::endl;
   }
   std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl;
   std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n" << std::endl;
}
