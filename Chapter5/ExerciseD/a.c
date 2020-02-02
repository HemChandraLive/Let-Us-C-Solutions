#include<stdio.h>
int main()
{
int number,fact=1,copy_num;
printf("Enter number :: ");
scanf("%d",&number);
copy_num=number;

if(number==0)
printf("Factorial of %d is %d\n",0,1);
else
{
  while(number>0)
  {
    fact=fact*number;
    number--;
  }
  printf("Factorial of %d is %d\n",copy_num,fact);

}
}
