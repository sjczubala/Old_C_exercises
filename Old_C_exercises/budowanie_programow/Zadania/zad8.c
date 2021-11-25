#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 8. Napisz program, który prosi użytkownika o wprowadzenie 
// trzech liczb z klawiatury, a następnie wypisze sumę, iloczyn, 
// najmniejszą i największą z wprowadzonych liczb.

//lista fcji
int max(int a, int b,int c);
int min(int a,int b,int c);

//glowna fcja
int main()
{
  int x,y,z;
  printf("Wprowadź trzy liczby całkowite:");
  scanf("%d %d %d",&x,&y,&z);
  int sum=x+y+z;
  int il=x*y*z;
  printf("Suma wynosi:%d\n",sum);
  printf("Iloczyn wynosi:%d\n",il);
  printf("MIN=%d\n",min(x,y,z));
  printf("MAX=%d\n",max(x,y,z));
  return 0;
}

//najwieksza wartosc
int max(int a,int b,int c)
{
  int m=a;
  if(b>m)m=b;
  if(c>m)m=c;
  return m;
}

//najmniejsza wartosc
int min(int a,int b,int c)
{
  int m=a;
  if(b<m)m=b;
  if(c<m)m=c;
  return m;
}