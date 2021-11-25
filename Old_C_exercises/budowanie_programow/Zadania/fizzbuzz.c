#include <stdio.h>
#include <stdlib.h>

//Wypisanie liczb od 1 do 100, dla liczb podzielnych przez 3
//wypisuje Fizz, dla liczb podzielnych przez 5 wypisuje Buzz,
//dla liczb podzielnych przez 3 i 5 wypisać FizzBuzz.

int main()
{
  int i;
  for(i=1;i<=100;i++)
  {
    if(i%3==0 && i%5==0)printf("FizzBuzz\n");
    else if(i%5==0)printf("Buzz\n");
    else if(i%3==0)printf("Fizz\n");
    else printf("%d\n",i);
  }
  return 0;
}