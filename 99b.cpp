/*
   99 Bottles of Beer on the Wall Program
*/

#include <cstdint>
#include <iostream>
#include <string>

std::string b(std::int16_t i)
{
   if(i==0) return "no more bottles";
   else return std::to_string(i) + (i==1 ? " bottle" : " bottles");
}

int main()
{
   for(std::int16_t i=99; i!=0; --i)
   {
      std::cout << b(i) << " of beer on the wall, " << b(i) << " of beer." << std::endl;
      std::cout << "Take one down and pass it around, " << b(i-1) << " of beer on the wall.\n" << std::endl;
   }
   std::cout << "No more bottles of beer on the wall, no more bottles of beer." << std::endl;
   std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n" << std::endl;
}
