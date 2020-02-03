#include<stdio.h>
int rec(int);
int nonrec(int);
void main()
{
  int number;
  printf("Enter the number\n");
  scanf("%d",&number);
  printf("Non Rec =%d\n",nonrec(number));
  printf("Rec =%d\n",rec(number));

}

int rec(int number)
{

if(number==0)
return 0;
else
{
  return number%10+rec(number/10);
}
}


int nonrec(int number)
{
int sum=0;
while(number>0)
{
  sum=sum+number%10;
  number=number/10;
}
return sum;
}
