#include<stdio.h>
void main()
{
int number,l;
printf("Enter the number\n");
scanf("%d",&number);
while (number>0) {
  //printf("%d\n",number);
  if(number>=1000)
  {
    printf("M");
    number%=1000;
  }
  else if(number>=500)
  {
    printf("D");
    number%=500;
  }
  else if(number>=100)
  {
    printf("C");
    number%=100;
  }
  else if(number>=50)
  {
    printf("L");
    number%=50;
  }
  else if(number>=10)
  {
    l=number/10;
    while (l>0) {
      /* code */
        printf("X");
        l--;
    }

    number%=10;
  }
  else if(number>=5)
  {
    printf("V");
    number%=5;
  }
  else if(number>=1)
  {
    printf("I");
    number%=1;
  }

}
}
