/*
   99 Bottles of Beer on the Wall Program
*/

#include <cstdint>
#include <iostream>

int main()
{
   for(std::int16_t b=99; b!=2; --b)
   {
      std::cout << b << " bottles of beer on the wall, " << b << " bottles of beer." << std::endl;
      std::cout << "Take one down and pass it around, " << b-1 << " bottles of beer on the wall.\n" << std::endl;
   }
   std::cout << "2 bottles of beer on the wall, 2 bottles of beer." << std::endl;
   std::cout << "Take one down and pass it around, 1 bottle of beer on the wall.\n" << std::endl;
   std::cout << "1 bottle of beer on the wall, 1 bottle of beer." << std::endl;
   std::cout << "Take one down and pass it around, no more  bottles of beer on the wall.\n" << std::endl;
   std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl;
   std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n" << std::endl;
}
