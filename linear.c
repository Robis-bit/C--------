#include<stdio.h>   
void main ()  
{  
    int a[10] = {5, 27, 42, 3, 7, 15, 19, 31, 55, 9};  
    int item, i,flag;  
    printf("\nEnter Item which is to be searched\n");  
    scanf("%d",&item);  
    for (i = 0; i< 10; i++)  
    {  
        if(a[i] == item)   
        {  
            flag = i+1;  
            break;  
        }   
        else   
        flag = 0;  
    }   
    if(flag != 0)  
    {  
        printf("\nItem found at location %d\n",flag);  
    }  
    else  
    {  
        printf("\nItem not found\n");   
    }  
}   