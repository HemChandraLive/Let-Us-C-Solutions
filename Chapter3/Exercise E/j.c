#include<stdio.h>
int main()
{
int year=0,invst,alt;
while(alt>invst)
{
year++;
alt=120*year;
invst=(1000*year)-4000;
}

printf("%d\n",year);

/*
2000 + 1000 * t > 6000 + t * ( 12 % of 6000)
=> 2000 + 1000 * t > 6000 + t * ( 720 )
=> 280 * t > 4000
=> t > 100/7
=> t = 15 ( smallest such integer ).
*/
  return 0;
}
