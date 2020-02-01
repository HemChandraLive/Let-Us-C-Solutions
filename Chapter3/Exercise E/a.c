#include<stdio.h>
void prime(int num);
void main()
{
  int i;
  for(i=1;i<301;i++)
  {
    prime(i);
  }
}

void prime(int num)
{
  int i,flag=0,num_copy;
  num_copy=num;
  for(i=2;i<num;i++)
  {
    if(num%i==0)
    {
      flag=1;
      break;
    }
  }

  if(flag==0)
  printf("prime number =%d\n",num_copy);
  else
  printf("Not Prime number =%d\n",num_copy);
}
