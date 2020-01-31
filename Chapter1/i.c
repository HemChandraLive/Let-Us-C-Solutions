#include<stdio.h>
int main()
{
int first=0,last=0,num,sum;
printf("Enter the number\n");
scanf("%d",&num);

if(num>0 && num<10)
{
  first=num;
}
else
{
first=num%10;
num=num/10;
while(num>10)
{
  num=num/10;
}
last=num;
}
sum=first+last;

printf("Sum of first and last digit =%d\n",sum);
return 0;
}
