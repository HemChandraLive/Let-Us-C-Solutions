#include<stdio.h>
void main()
{
int fact=1,num,copy_num;
printf("Enter any number : ");
scanf("%d",&num);
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
printf("Factorial of %d is %d",copy_num,fact);
}
}
