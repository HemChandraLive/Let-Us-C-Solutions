#include<stdio.h>
int main()
{
  float distance;
  printf("Enter Distance in KM\n");
  scanf("%f",&distance);
  printf("In Km : %.3f \n",distance);
  printf("In M  : %.3f \n",distance/1000 );
  printf("In CM  : %.6f \n",distance/100000);
  return 0;
}
