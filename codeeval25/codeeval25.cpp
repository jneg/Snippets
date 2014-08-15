/*
   Print odd numbers from 1-99

   g++ codeeval25.cpp -std=c++11 -Werror -O2 -o codeeval25
   ./codeeval25
*/

#include <cstdio>

int main()
{
   for(int i=0; i<=99; ++i) { if(i%2) std::printf("%i\n", i); }
}
