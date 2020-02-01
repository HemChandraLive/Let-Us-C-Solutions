#include<stdio.h>
//#define max 6
void main()
{
  int array[]={54,23,54,23,5,6,0};
  int big,small;
  int loop;
  big=small=array[0];
  for(loop=1;loop<7;loop++)
  {
    if(array[loop]<small)
    small=array[loop];
    if(array[loop]>big)
    big=array[loop];
  }
  printf("Range is %d \n",big-small);
}
