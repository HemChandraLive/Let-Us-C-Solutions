#include<stdio.h>
#include<math.h>
void main()
{
  int i;
  double p,r,n,q,a;
  for(i=1;i<=10;i++)
  {
    printf("Enter the value of principal , rate , years , compounds\n");
    scanf("%lf %lf %lf %lf",&p,&r,&n,&q);
    a=(1+(r/q));
    a=p*pow(a,n*q);
    printf("%lf\n",a);
  }
}
