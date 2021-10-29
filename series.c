#include <stdio.h>

int factorial (int n)
{
    int i, fact=1;
    for(i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main() 
{
    float sum=0;
    int n, f, i, j, x;
    printf("Enter the value of n and x : ");
    scanf("%d %d",&n,&x);
    for(i=0, j=0;i<n;i++, j+=2)
    {
        f=factorial (j);
        if(i%2==0)
        {
        sum+=(x^j)/(float)f;
        }
        else
         {sum-=(x^j)/(float)f;
    }
    }
    printf("SUM = %.2f",sum);
}