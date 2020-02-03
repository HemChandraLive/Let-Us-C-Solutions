#include<stdio.h>
void main()
{
  int number,i=2;
  printf("Enter the number\n");
  scanf("%d",&number);
  while (number>1)
  {
    if(number%i==0)
    {
    printf("%d ",i);
    number=number/i;
    }
    else
    i++;
  }
}
