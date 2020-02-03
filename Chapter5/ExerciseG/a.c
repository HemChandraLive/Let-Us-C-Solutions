#include<stdio.h>
#include<math.h>
float std(int array[],int avg,int len);
void main()
{
  int num[5],i,sum=0;
  float avg;
  for(i=0;i<5;i++)
  {
    printf("Enter %d number\n",i+1);
    scanf("%d",&num[i]);
    sum=sum+num[i];
  }

printf("Sum =%d\n",sum);
printf("Average =%d\n",sum/5);
printf("%f",std(num,sum/5,5));
}

float std(int array[],int avg,int len)
{
int i;
float sd=0;
for(i=0;i<len;i++)
{
  sd=sd+(pow((array[i]-avg),2));
}
sd=sd/len;
sd=pow(sd,.5);
return sd;
}
