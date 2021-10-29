#include<stdio.h>

int main()
{
  int i,n,Sum=0,numbers;
  float Average;

  printf("Please Enter How many Number you want?\n");
  scanf("%d",&n);

  printf("Please Enter the elements one by one\n");
  for(i=0;i<n;++i)
   {
     scanf("%d",&numbers);
     Sum = Sum +numbers;
   }

  Average = Sum/n;

  printf("Sum of the %d Numbers = %d",n, Sum);
  printf("Average of the %d Numbers = %.2f",n, Average);

  return 0;
}