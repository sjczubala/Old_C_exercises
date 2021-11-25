#include <stdio.h>
#include <stdlib.h>
/*
//lista fcji pomocniczych
void mling_hej(char* who);

//fcja glowna
int main()
{
  mling_hej("Sebastian");
  return 0;
}

//fcje pomocnicze
void mling_hej(char* who)  wypis powitań/
{
  printf("hello %s\n",who);
  printf("witaj %s\n",who);
}
//2ga fcja
int main()
{
  int dim;
  scanf("%d",&dim);
  char who[dim];
  scanf("%s",who);

  printf("hello %s\n",who);
  printf("witaj %s\n",who);
  
  return 0;
} */

//lista fcji
void load_data(float* a, float* b);
void print_data(float a, float b);

//glowna fcja
int main()
{
  float x,y;
  load_data(&x,&y);
  print_data(x,y);
  return 0;
}

//wczytywanie danych
void load_data(float* a, float* b)
{
  printf("x=");
  scanf("%f",a);
  printf("y=");
  scanf("%f",b);
}
//wypisywanie wyników
void print_data(float a, float b)
{
  float sum=a+b;
  float dif=a-b;
  float mn=a*b;
  float dz=a/b;
printf("sum=%.2f;\ndif=%.2f;\nmn=%.2f;\ndz=%.2f;\n",sum,dif,mn,dz);
}