#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of multiflication you want:\n");
    scanf("%d", &num);
    printf("Multiflication table of %d is as follow:\n", num);
    printf("%d x 1 = %d\n", num , num*1);
    printf("%d x 2 = %d\n", num , num*2);
    printf("%d x 3 = %d\n", num , num*3);
    printf("%d x 4 = %d\n", num , num*4);
    printf("%d x 5 = %d\n", num , num*5);
   
    return 0;
}
