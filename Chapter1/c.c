#include<stdio.h>
int markchecked(float marks);
int main()
{
float submarks[5];
int i;
float check,totalmarks=0;

for(i=0;i<5;i++)
{
  printf("Enter Marks in %d subject\n",i+1);
  scanf("%f",&submarks[i]);
  check=markchecked(submarks[i]);
  if(check==0)
  {
    printf("Invalid Marks\n");
    i--;
  }
}

for(i=0;i<5;i++)
{
  totalmarks+=submarks[i];
printf("%.2f ",submarks[i]);
}

printf("\nTotal Marks %.3f \n ",totalmarks);
printf(" Secured = %.3f",(totalmarks/5));





return 0;
}

int markchecked(float mark)
{
if (mark<=100&&mark>=0)
return 1;
return 0;
}
