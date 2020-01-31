#include<stdio.h>
int main()
{
 float cent,Fahrenheit;
 //(32°F − 32) × 5/9 = 0°C
 printf("Enter the Temp in Fahrenheit\n");
 scanf("%f",&Fahrenheit);
 cent=(32*Fahrenheit-32)*(5./9.);
 printf("Centigrade Degree = %f\n",cent);
  return 0;
}
