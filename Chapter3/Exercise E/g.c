#include<stdio.h>
#define column 10
void main()
{
  int num=1,space,outerloop,innerloop;
  for(outerloop=0;outerloop<column;outerloop++)
  {
  for(space=column-outerloop;space>0;space--)
  {
    printf(" ");
  }
  for(innerloop=0;innerloop<=outerloop;innerloop++)
  {
    printf("%d ",num);
  }
  num++;
  printf("\n");
}
}
