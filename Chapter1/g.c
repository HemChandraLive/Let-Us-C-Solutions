#include<stdio.h>
int main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
int sum=0;
while(num>0)
{
  sum=sum+num%10;
  num=num/10;
}
printf("Sum of entered number =%d\n",sum);
return 0;
}
