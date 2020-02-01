#include<stdio.h>
#define person 10
void main()
{
  static int overtime[person];
  int i,workinghour;
  for(i=0;i<person;i++)
  {
    printf("Enter the %d Working Hour :: ",(i+1));
    scanf("%d",&workinghour);
    if(workinghour>40)
    overtime[i]=(workinghour-40)*12;
    printf("Overtime income for %d is RS. %d\n\n",i+1,overtime[i]);
  }
  printf("Exit\n");
}
