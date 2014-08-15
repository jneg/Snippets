/*
   Simple FizzBuzz Program

   g++ fizzbuzz.cpp -std=c++11 -Werror -O2 -o fizzbuzz
   ./fizzbuzz
*/

#include <cstdio>

int main()
{
   for (int i=1; i<=100; printf("\n"), ++i)
   {
      if (i%3==0) printf("Fizz");
      if (i%5==0) printf("Buzz");
      if (i%3&&i%5) printf("%d", i);
   }
}
