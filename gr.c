#include<stdio.h>
int main()
{
   int num1,num2,num3;
   
   
   printf("Enter value of num1, num2 and num3:\n");
  
   scanf("%d\n %d\n %d\n",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))
   {
      printf(" Number1 is greatest\n");
      }
   else if((num2>num3)&&(num2>num1))
   {
      printf(" Number2 is greatest\n");
      }
   else
      printf(" Number3 is greatest\n");
   return 0;
}
