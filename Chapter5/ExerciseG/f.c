#include<stdio.h>
int rec(int number);
void main()
{
  int number,i=0,copy_num;
  int array[100];
  printf("Enter the number\n");
  scanf("%d",&number);
  copy_num=number;
  while(number>0)
  {
    array[i++]=number%2;
    number=number/2;
  }

  printf("Binary Equivalent :: ");
  while(i>0)
  {
    printf("%d",array[--i]);
  }

  printf("\n****************\n");
  printf("Binary Equivalent Using recursive function ::");
  rec(copy_num);
}

int rec(int number)
{
  if(number==0)
  return 1;

  rec(number/2);
  printf("%d",number%2);
}
