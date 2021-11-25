#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Wypisuje silnie liczby 0<x<5
int fact(int a, int b);


int main()
{
  int x;
  printf("Podaj liczbe naturalna (max=5): ");
  scanf("%d",&x);
  
  if(x>5||x<0){printf("ERROR:Błędna liczba\n");}
  else
  {
    int y;
    fact(x,y);
  }
  return 0;
}

int fact(int a, int b)
{
  int i;
  if(a==0)b=1;
  else if(a==1)b=a;
  else 
  {
    for(i=0;i<a;i++)
    {
      if(a==2)b=a*(a-1);
      else if(a==3)b=a*(a-1)*(a-2);
      else if(a==4)b=a*(a-1)*(a-2)*(a-3);
      else b=a*(a-1)*(a-2)*(a-3)*(a-4);
    }
  }
  printf("%d\n",b);
  return 0;
}