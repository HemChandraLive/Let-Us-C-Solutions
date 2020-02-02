#include<stdio.h>
#define column 10
int factorial(int n);
int pascaltriangle(int n,int k);
void main()
{
  int num=1,space,outerloop,innerloop;
  for(outerloop=0;outerloop<column;outerloop++)
  {
  for(space=column-outerloop;space>0;space--)
  {
    printf(" ");
  }
  for(innerloop=0;innerloop<=outerloop;innerloop++)
  {
    printf("%d ",pascaltriangle(outerloop,innerloop));
  }
  num++;
  printf("\n");
}
}


int pascaltriangle(int n,int k)
{
  int ans=factorial(n)/(factorial(k)*factorial(n-k));
  return ans;
}

int factorial(int n)
{
  if(n==0)
  return 1;
  else
  return n*factorial(n-1);
}
