#include<stdio.h>

 int swap(int *x, int *y)
{
int temp;
 temp=*x;
*x=*y;
*y=temp;
printf("\nValue of r after swaping: %d",*x);
printf("\nValue of v after swaping: %d",*y);
}
int main()
{ 
int r=10, v=20; 
swap(&r, &v);  // passing value to function

}