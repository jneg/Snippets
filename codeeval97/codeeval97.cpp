/*
   For every name and "key", prints each character of
   the name with index "number" until the name appears

   g++ codeeval97.cpp -std=c++11 -Werror -O2 -o codeeval97
   ./codeeval97 names.txt
*/

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void findWriter(char* filename)
{
   std::ifstream file(filename);
   for(std::string line; std::cout << std::endl && std::getline(file, line);)
   {
      std::string name = line.substr(0, line.find('|'));
      std::string nums = line.substr(line.find('|')+2);
      std::stringstream strm;
      strm << nums;
      for(std::string num; !strm.eof();)
      {
         std::getline(strm, num, ' ');
         std::cout << name.at(std::atoi(num.c_str())-1);
      }
   }
}

int main(int argc, char** argv)
{
   if(argc!=2) { std::cout << ("./codeeval97 file") << std::endl; return 0; }
   findWriter(argv[1]);
}
