#include<stdio.h>
void main()
{
int num1,num2,result=1;
//entering first number
printf("Enter first number :: ");
scanf("%d",&num1);
//entering second number
printf("Enter second number :: ");
scanf("%d",&num2);

while(num2>0)
{
result=result*num1;
num2--;
}
printf("==================\nAnswer =%d \n",result);
}
