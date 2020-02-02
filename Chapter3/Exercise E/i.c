#include<stdio.h>
int main()
{
  float i,x;
  int y;
  for(y=1;y<7;y++)
  {
    x=5.5;
    while(x<12.6)
    {
    printf("%d %f %f\n",y,x,2+(y+0.5*x));
    x+=0.5;
    }
    printf("***********\n");
  }


  return 0;
}
