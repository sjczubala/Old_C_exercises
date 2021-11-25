#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 9. Napisać program, który wypisze tabelkę wartości pierwiastka 
// kwadratowego. Program ma pytać o

//     wartość poczatkową
//     wartość końcową
//     krok dla argumentu

// i wypisywać tabelkę w podanym zakresie. Liczby powinny być 
// wypisywane z dokładnością czterech miejsc po przecinku.

int main()
{
  float min, max, step, sqr;
  
  printf("Wartość początkowa=");
  scanf("%f",&min);
  printf("Wartość końcowa=");
  scanf("%f",&max);
  printf("Skok=");
  scanf("%f",&step);
  for(min=min;min<=max;min=min+step)
  {
    sqr=sqrt(min);
    printf("%.4f\t%.4f\n",min,sqr);
  }
  return 0;
}