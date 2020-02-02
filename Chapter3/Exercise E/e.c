#include<stdio.h>
void main()
{
  int A,tillrow;
  printf("Enter the row");
  scanf("%d",&tillrow);
  int row,col,i;
  for(row=0;row<tillrow;row++)
  {
    A=65;
    for(col=tillrow-row;col>0;col--)
    {
      printf("%c",A++);
    }

    for(i=0;i<2*row-1;i++)
    {
      printf(" ");
    }

    if(row==0)
    for(col=tillrow-row-1;col>0;col--)
    {
      printf("%c",64+col);
    }
    else
    {
      for(col=tillrow-row;col>0;col--)
      {
        printf("%c",64+col);
      }
    }

    printf("\n");
  }
}
