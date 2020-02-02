#include<stdio.h>
void main()
{
int a,b,copy_num;
float result=1;
printf("Enter a and b\n");
scanf("%d %d",&a,&b);
copy_num=b;
while(b>0)
{
  result=result*a;
  b--;
}
printf("************\n");
printf("%d power to %d is %.3f\n",a,copy_num,result);
}
