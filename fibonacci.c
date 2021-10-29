#include <stdio.h>

int fib_recursive(int n)
{
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }    
}


int fib_itrative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a+b; //1 for iteration 1
        a = b-a; //1 for iteration 1

    }
    
    return a;
}
int main()
{
    int number;
    printf("Enter the index of which you want fibonacci series\n");
    scanf("%d", &number);
    printf("your fibonacci series using recursive aaproch at postion %d is %d\n", number, fib_recursive(number));
    printf("your fibonacci series using itrative aaproch at postion %d is %d\n", number, fib_itrative(number));
    return 0;
}