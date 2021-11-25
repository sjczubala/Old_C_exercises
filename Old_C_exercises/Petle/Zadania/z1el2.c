#include <stdio.h>
int main()
{
  int M;
  int suma = 0;
  int i = 1;
  printf("Podaj liczbe M: ");
  scanf("%d",&M);
  while(suma<M)
  {
    suma=suma+i;
    i++;
  }
  int n=i-1;
  printf("Szukane n to:%d ", n);
  return 0;
}
