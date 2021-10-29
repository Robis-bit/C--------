#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="Hey 123 oop";
    int i,count1,count2,count3;
    count1=count2=count3=0;
    

    for(i=0;i<strlen(str);i++)
    {
        if(str[i] ==' ')
        {
        count1++;
        }
        if(str[i]>='0' && str[i]<='9')
        {
            count2++;
        }
        if(str[i]!=' ')
        {
            count3++;
        }
    }
    printf("Total blank spaces =%d\n",count1);
    printf("Total digits =%d\n",count2);
    printf("Total character =%d\n",count3);
}