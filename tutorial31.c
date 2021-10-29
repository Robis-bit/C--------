#include<stdio.h>

int swap( int x, int y)
{
 int temp;
 temp = x;
 x = y;
 y = temp;
   printf("swaping the first number a:%d\n" , x);
    printf("swaping the second number b:%d\n" , y);
}
int main()
{
    int a=15,b= 45;
    swap(a,b);
  
    return 0;
}