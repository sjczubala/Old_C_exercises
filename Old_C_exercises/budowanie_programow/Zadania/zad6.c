#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//6. Napisz program, który wczyta liczbę rzeczywistą i wypisze 
//jej pierwiastek kwadratowy. W wypadku podania liczby ujemnej, 
//program powinien wypisać komunikat o błędzie oraz 
//zakończyć działanie.

int main()
{
  int x;
  float pierw;
  printf("Podaj x:\n");
  scanf("%d",&x);
  if(x<0)
  {printf("ERROR: x must be higher than 0.\n");}
  else printf("Pierwiastek=%.2f\n",pierw=sqrt(x)); 
  return 0;
}