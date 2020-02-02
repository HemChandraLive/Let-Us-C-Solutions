#include<stdio.h>
int main()
{
  char class;
  int failed,i,grace=0;
  while(1)
  {

  printf("Enter Class obtained \nf:first class,s:second class,t:third class ---> ");
  scanf("%c",&class);
  printf("Number of subjects failed ---> ");
  scanf("%d",&failed);

  if(failed<0)
  {
  printf("Invalid Failed subjects Entered\n");
  continue;
  }
  switch (class) {
    case 'f':
    if(failed<4)
    grace=5*failed;
    break;

    case 's':
    if(failed<3)
    grace=4*failed;
    break;

    case 't':
    if(failed==1)
    grace=5*failed;
    break;
    default:
    printf("Invalid Entry\n");
  }
printf("**************---------***************\n");
printf("Class %c ,failed in %d subjects , Grace Marks obtained =%d\n",class,failed,grace);
  printf("\n");
  }
}
