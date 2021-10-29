#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[34];
    printf("Enter your name\n");
    //scanf("%s" , &name);
    gets(name);
    printf("Your name is %s\n" , name);
    return 0;
}