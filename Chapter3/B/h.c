#include<stdio.h>
int main()
{
int number,array[1000],i=0,copy_num;
printf("Enter the number :: ");
scanf("%d",&number);
copy_num=number;

while(number>0)
{
  array[i]=number%8;
  number/=8;
  i++;
}

i--;

printf("Octal Representation of %d is ",copy_num);
while(i>=0)
{
printf("%d",array[i]);
i--;
}
  return 0;
}
