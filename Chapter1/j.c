#include<stdio.h>
int main()
{
int number,i;
int demon[]={100,50,10,5,2,1};
printf("Enter number\n");
scanf("%d",&number);

for(i=0;i<6;i++)
{
  if(number>=demon[i])
  printf("%d Rs Notes are %d \n",demon[i],number/demon[i]);
  number=number%demon[i];
}

return 0;
}
