#include<stdio.h>
void main()
{
int number,l,i;
printf("Enter the number\n");
scanf("%d",&number);
char ch[]={'M','D','C','L','X','V','I'};
int num[]={1000,500,100,50,10,5,1};

for(i=0;i<7;i++)
{
  if(number>=num[i])
  {
    l=number/num[i];
    number=number%num[i];
    while(l>0)
    {
      printf("%c",ch[i]);
      l--;
    }
  }
}
}
