#include<stdio.h>
#define tabletill 10
void main()
{
  int loop,tableof;
  printf("Enter the number ");
  scanf("%d",&tableof);
  for(loop=1;loop<=tabletill;loop++)
  {
    printf("%d * %d = %d\n",tableof,loop,(tableof*loop) );
  }


}
