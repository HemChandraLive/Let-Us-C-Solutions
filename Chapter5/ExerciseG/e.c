#include<stdio.h>
int fib(int n);
void main()
{
  int n,k=0,l=1,i,o;
  printf("Enter till term in fibonacci series\n");
  scanf("%d",&n);
  printf("***********\n");
  for(i=1;i<=n;i++)
  {

    o=l+k;
    l=k;
    k=o;
printf("%d\n",k);
  }

  printf("***********\n");
  printf("Using recursive function =%d\n",fib(n));
}

int fib(int n)
{
  if (n==0)
  return 0;

  else if(n==1)
  return 1;

  else
  return fib(n-1)+fib(n-2);
}
