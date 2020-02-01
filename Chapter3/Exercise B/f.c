#include<stdio.h>
void main()
{
  int userchoice,matchstick=21,computerchoose;
//main logic here is 5-userchoice
  while(matchstick>0)
  {
  printf("Enter matchstick 1 to 4 :: ");
  scanf("%d",&userchoice);
  printf("\n");

  if(userchoice>0&&userchoice<5)
  {
  computerchoose=5-userchoice;
  printf("Computer Chooses =%d \n",computerchoose);
  matchstick=matchstick-5;
  printf("matchstick remain = %d\n\n",matchstick);
  }
else
{
  printf("Invalid Entry Try Again \n");
}
if(matchstick==1)
{
  printf("You Lost The Game : matchstick Remain 1 \n");
  break;
}
}

}
