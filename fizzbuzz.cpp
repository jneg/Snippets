#include <cstdio>
int main()
{
   for (int i=1;i<101;printf("\n"),++i)
   {
      if (!(i%3)) printf("Fizz");
      if (!(i%5)) printf("Buzz");
      if (i%3&&i%5) printf("%d",i);
   }
}
