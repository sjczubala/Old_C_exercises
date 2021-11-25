#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 7. Napisz program, który wczyta liczbę rzeczywistą i wypisze 
// jej odwrotność oraz jej pierwiastek kwadratowy. Program nie 
// powinien obliczać odwrotności liczby 0 oraz pierwiastka z 
// liczby ujemnej. W takiej sytuacji zamiast obliczeń program 
// powinien wypisać odpowiedni komunikat.

//lista fcji
void load_data(int* a);
void print_data(int a, int b, float c);

//fcja glowna
int main()
{
  int x;
  load_data(&x);
  float pierw=sqrt(x);
  int y=-x;
  print_data(x,y,pierw);
  return 0;
}

//wczytywanie danych
void load_data(int* a)
{
  printf("x=");
  scanf("%d",a);
}

//wypisywanie danych
void print_data(int a, int b, float c)
{
  if(a>0){printf("Odwrotnosc=%d\nPierwiastek=%.2f\n",b,c);}
  else if(a<0){printf("Odwrotnosc=%d\nPierwiastek=ERROR(x must be higher than 0)\n",b);}
  else printf("Odwrotnosc=ERROR(x must be different from 0)\nPierwiastek=%.2f\n",c);
}