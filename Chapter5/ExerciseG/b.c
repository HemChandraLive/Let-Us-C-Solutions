#include<stdio.h>
#include<math.h>
float avg(int array[],int len);
void main()
{
  int num[3],i;
  for(i=0;i<3;i++)
  {
    printf("Enter %d number\n",i+1);
    scanf("%d",&num[i]);
    if(num[i]<0 || num[i]>100)
    {
      printf("Invalid Entry\n");
      i--;
    }
  }
printf("Average %f\n",avg(num,3));
printf("Percentage %f% \n",avg(num,3));
}

float avg(int num[],int len)
{
  float sum;
  int i;
  for(i=0;i<len;i++)
  {
    sum=sum+num[i];
  }
  return sum/len;
}
