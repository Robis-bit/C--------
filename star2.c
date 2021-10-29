#include<stdio.h>
void starpattern(int rows)
{
  for (int i = 0; i <rows; i++)
  {
    for (int j= 0; j <=i; j++)
    {
        printf("*");
    }
    printf("\n\n");
  }
  
}
void reversestarpattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j<=rows-i-1; j++)
        {
            printf("*");
        }
        printf("\n\n");
    }

    
    
}

int main()
{
    int rows, type;
    printf("Enter press 1 for starpattern and press 2 for reverse star pattern\n");
    scanf("%d" ,&type);
    printf("How many rows you want print\n" , rows);
    scanf("%d" , &rows);
    
    switch (type)
    {
    case 1:
       starpattern(rows);

        break;
    case 2:
     reversestarpattern(rows);
    default:
        break;
    }
    return 0;
}