#include<stdio.h>
void main()
{
  int A;
  int row,col=7;
  for(row=1;row<=7;row++)
  {
    A=65;
    for(col=7-row;col>=0;col--)
    {
      printf("%c ",A++);
    }
    printf("\n");
  }
}
