#include<stdio.h>
int main()
{
int num;
printf("Enter the number\n");
scanf("%d",&num);
int rev=0;
while(num>0)
{
  rev=rev*10+num%10;
  num=num/10;
}
printf("Reverse of entered number =%d\n",rev);
return 0;
}
