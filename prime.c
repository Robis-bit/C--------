#include <stdio.h>
int main()
{
    
    int n, i, j, flag;
    printf("enter the number  :");
    scanf("%d ",&n);
    printf("prime no present in between 1and %d:",  n);
    for (i = 2; i < n; i++)
    {
        flag = 1;
        for (j = 2; j <= i / 2; ++j)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            printf("%d\n", i);
    }
    return 0;
}