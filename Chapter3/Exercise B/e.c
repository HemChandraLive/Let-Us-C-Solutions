#include<stdio.h>
void main()
{
  int number,power,copy_num;
  double result,loop;
  for(loop=1;loop<501;loop++)
  {
  number=loop;
  result=0;
  power=0;
  copy_num=number;
  while(number>0)
  {
    power=(number%10);
    power=power*power*power;
    result=result+power;
    number=number/10;
  }
  if(copy_num==result)
  printf("Armstrong number =%d \n",copy_num);
  else
  printf("Not Armstrong number =%d\n",copy_num);
}
}
