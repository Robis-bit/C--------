#include <stdio.h>

int main()
{
    int num ;
    printf("Enter the number upto which you want to print\n");
    scanf("%d", &num);
    int i;
    for(i = 1; i <= num; i++) { 
    printf("%d ",i);
}
    return 0;
}