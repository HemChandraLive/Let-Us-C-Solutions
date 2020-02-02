#include<stdio.h>
void main()
{
int number,i=2;
printf("Enter the number :: ");
scanf("%d",&number);
if(number>1)
while(number>1)
{
  if(number%i==0)
  {
  printf("%d ",i);
  number=number/i;
  }
  else
  i++;
}
else
printf("Invalid Input\n");
}
