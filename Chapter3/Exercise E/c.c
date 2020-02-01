#include<stdio.h>
int factorial(int num);

void main()
{

  float sum=0,i;

  for(i=1;i<8;i++)
  {
    sum=sum+(i/factorial(i));
  }

  printf("Sum of First seven terms in series =%f \n",sum);
}


int factorial(int num)
{
int fact=1,copy_num;
copy_num=num;
if(num==0)
{
fact=1;
printf("Factorial of %d is %d",copy_num,fact);
}
else if(num<0)
{
  printf("Invalid number");
}
else
{
while(num>1)
{
fact=fact*(num);
num=num-1;
}
}
return fact;
}
