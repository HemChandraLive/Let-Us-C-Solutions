#include<stdio.h>
#include<math.h>

double f(double);

void main()
{
  int loop;
  double sum=0;
  double input,xvalue;
  printf("Enter the value of x ");
  scanf("%lf",&input);

  for(loop=1;loop<8;loop++)
  {
    if(loop==1)
  {
      sum=sum+f(input);
  }
  else
  {
    pow(2,4);
    printf("%lf\n",xvalue);
    sum=sum+pow(loop,xvalue);
  }
  }
  printf("Answer = %lf\n",sum);
}

double f(double x)
{
  return (x-1)/x;
}
