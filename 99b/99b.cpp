/*
   99 Bottles of Beer on the Wall Program

   g++ 99b.cpp -std=c++11 -Werror -O2 -o 99b
   ./99b
*/

#include <iostream>
#include <string>

std::string b(int i)
{
   if(!i) return "no more bottles";
   return std::to_string(i) + (i==1 ? " bottle" : " bottles");
}

int main()
{
   for(int i=99; i>=0; --i)
   {
      std::cout << b(i) << " of beer on the wall, " << b(i) << " of beer.\n";
      if(!i) std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n\n";
      else std::cout << "Take one down and pass it around, " << b(i-1) << " of beer on the wall.\n\n";
   }
}
