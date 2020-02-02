#include<stdio.h>
int factorial(int);
void prime(int);
void OddorEven(int);
int main()
{
int option,number;
while(1)
{
printf("Enter Your Choice \n1:Factorial of a number\n2:Prime or not\n3:Odd or Even\n4:Exit\nYou Choosed :: ");
scanf("%d",&option);
if(option==4)
{
printf("------------EXIT---------\n");
break;
}
printf("Enter the number:");
scanf("%d",&number);
printf("***************\n");
switch (option) {
  case 1:

  printf("Factorial of %d is %d \n",number,factorial(number));
  break;

  case 2:
  prime(number);
  break;

  case 3:
  OddorEven(number);
  break;

  default:
  printf("Invalid Entry\n");
  break;
}

printf("\n");
}
}

int factorial(int n)
{
  if(n==0)
  return 1;
  else
  return n*factorial(n-1);
}

void prime(int n)
{
int number,i,flag=0;
if(n==1)
flag=1;
else
for(i=2;i<n;i++)
{
  if(n%i==0)
  {
    flag=1;
    break;
  }
}

if(flag==1)
printf("Not a prime number\n");
else
printf("Prime number %d\n",n);
}

void OddorEven(int n)
{
  if(n%2==0)
  printf("Even number\n");
  else
  printf("Odd number\n");
}
