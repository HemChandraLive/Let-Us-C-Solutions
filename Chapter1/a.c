#include<stdio.h>
int main()
{
  float salary,totalsalary;
  printf("Enter Salary Amount :");
  scanf("%f",&salary);
  totalsalary=salary+.4*salary+.2*salary;
  printf("Gross salary %.3f\n",totalsalary );
  return 0;
}
