#include <stdio.h>


int reversenum(int num)
{
    int reversed = 0;
    

    
    while (num != 0)
    
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    printf("The reversed number is %d\n", reversed);

    
}

int main()
{
    int number,func;
    printf("Enter a number to reverse \n");
    scanf("%d", &number);
    
     func= reversenum(number);

    return 0;
}
