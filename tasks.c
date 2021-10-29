#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="str1 ";
    char s2[]="is a friend of";
    char s3[]=" str2";
    char s4[34];
    char s5[34];
    
    strcpy(s4,strcat(s1,s2));
    puts(s4);
     strcpy(s5,strcat(s4,s3));
     puts(s5);

    return 0;
    }
