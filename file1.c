#include<stdio.h>
int main()
{
 
    FILE *fp=NULL;   
    char fName[20];
 
    printf("Enter file name to create :");
    scanf("%s",fName);
 
    
    fp=fopen(fName,"w");
    
    
 
    printf("File created successfully.");
    return 0;
}