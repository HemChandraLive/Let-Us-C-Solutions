#include<stdio.h>
int main()
{
 float len,bre,radiCircle;
 printf("Enter the length and breadth of Rectangle :");
 scanf("%f %f",&len,&bre );
 printf("Area of Rectangle = %f\n", len*bre);
 printf("Perimeter of Rectangle =%f\n",2*(len+bre) );
 printf("Enter Radii of Circle : ");
 scanf("%f", &radiCircle);
 printf("\nArea of the circle =%f\n",3.14*radiCircle*radiCircle );
 printf("Circumference of the circle =%f",3.14*2*radiCircle );

  return 0;
}
