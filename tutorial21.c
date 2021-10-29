#include <stdio.h>

int rec_factorial(int number)
{

    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * rec_factorial(number - 1));
    }
}
int nonrec_factorial(int x)
 {
   int i, f = 1;
   for(i = 1;i <= x; i++)
   {
       f = f * i;
   }
    return(f);
}
int main()
{
    int num, recusive, nonrecursive;
    printf("Enter the number you want the factorial of\n");
    scanf("%d", &num);
    recusive=rec_factorial( num);
    
    printf("The factorial of %d is %d using recursive\n", num, rec_factorial(num));
 nonrecursive = nonrec_factorial( num);
 printf("The factorial of %d is %d using nonrecursive\n" , num, nonrec_factorial(num));
    return 0;
}

