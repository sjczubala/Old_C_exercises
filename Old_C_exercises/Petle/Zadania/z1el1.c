#include <stdio.h>
#include <stdlib.h>


//1. Napisz program obliczający wartość każdego z poniższych wyrażeń:
//
//n1=5+3*8/2-3
//n2=2%2+2*2-2/2
//n3=2*4*(5+9/2)

int equasion(int n1);
int equasion1(int n2);
int equasion2(int n3);

int main()
{
  int n1,n2,n3;
  n1=equasion(n1);
  n2=equasion1(n2);
  n3=equasion2(n3);
  printf("n1=%d\nn2=%d\nn3=%d\n",n1,n2,n3);
  return 0;
}

int equasion(int n1)
{
  n1=5+3*8/2-3;
  return n1;
}

int equasion1(int n2)
{
  n2=2%2+2*2-2/2;
  return n2;
}

int equasion2(int n3)
{
  n3=2*4*(5+9/2);
  return n3;
}
