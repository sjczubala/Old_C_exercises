#include <stdio.h>
#include <stdlib.h>

float val_pi1(float* pi1,int dim);
float val_pi2(float* pi2,int dim);
float val_pi(float* pi, float* pi1, float* pi2, int dim);

int main()
{
  int dim;
  printf("How many numbers u want to add?");
  scanf("%d",&dim);
  if(dim==0)printf("ERROR1");

  else
  {
  float* pi;
  float* pi1;
  float* pi2;

  pi=(float*)malloc(dim*sizeof(float));
  pi1=(float*)malloc(dim*sizeof(float));
  pi2=(float*)malloc(dim*sizeof(float));
  if(pi==NULL||pi1==NULL||pi2==NULL)printf("ERROR");

  else
  {
  val_pi1(pi1,dim);
  val_pi2(pi2,dim);
  val_pi(pi,pi1,pi2,dim);
  }
  free(pi1);
  free(pi2);
  free(pi);
  }
  return 0;
}

float val_pi1(float* pi1,int dim)
{
  int i;
  pi1[0]=4;
  for(i=0;i<=dim;i++)
  {
    pi1[i]=pi1[i-1]+4./(1+(4*i));
  }
  return pi1[dim];
}

float val_pi2(float* pi2,int dim)
{
  int i;
  pi2[0]=-4/3;
  for(i=0;i<=dim;i++)
  {
    pi2[i]=pi2[i-1]-4./(3+(4*i));
  }
  return pi2[dim];
}

float val_pi(float* pi, float* pi1, float* pi2, int dim)
{
  int i;
  for(i=0;i<=dim;i++)
  {
    pi[i]=pi1[i]+pi2[i];
    if(i==dim)printf("pi[%d]=%.4f\n",i,pi[i]);
    else if(i==10||i==100||i==1000||i==1000000)printf("pi[%d]=%.4f\n",i,pi[i]);
  }
  return pi[i];
}

