#include<stdio.h>
void main()
{
  static int pos,neg,zero,num;
  int ex;
  while(1)
  {
    printf("Enter number :: ");
    scanf("%d",&num);;
    if(num==0)
    zero++;
    else if(num>0)
    pos++;
    else
    neg++;

    printf("For Exit type 1 else others ::");
    scanf("%d",&ex);
    if(ex==1)
    break;
  }

  printf("You enter \nzero=%d \npos=%d \nneg=%d\n",zero,pos,neg);
}
