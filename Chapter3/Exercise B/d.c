#include<stdio.h>
void main()
{
  int num;
  for(num=0;num<256;num++)
  {
    //type casting here
    printf("%d = %c\n",num,(char)num);
  }
}
