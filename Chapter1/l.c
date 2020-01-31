#include<stdio.h>
int main()
{
int buf,num;
printf("Enter the number :");
scanf("%d",&num);

//Reverse the number
int rev=0;
while(num>0)
{
  rev=rev*10+num%10;
  num=num/10;
}

printf("Required Answer = ");
num=rev;
while(num>0)
{
  buf=num%10+1;
  if(buf>9)
  buf=buf%10;
  printf("%d",buf);
  num/=10;
}
return 0;

}
