#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * replaceWord( const char * str, const char * oldword , const char * newword)
{
    char * resultString;
    int i , count =0;
    
    int newwordLength=strlen(newword);
    int oldwordLength=strlen(oldword);

    for ( i = 0; str[i] !='\0'; i++)
    {
        if(strstr(&str[i] , oldword) == &str[i])
        {
            count++;
            i = i + oldwordLength -1;
        }

    }
    
     resultString = (char *)malloc(i + count * (newwordLength - oldwordLength) + 1);

    i = 0;
     
    while(*str)
    {
  if (strstr ( str, oldword) == str)
  {
       strcpy(&resultString[i], newword);
            i += newwordLength;
            str += oldwordLength;
  }
  else{
      resultString[i]=0;
      i +=1;
      str +=1;
  }
    }
     resultString[i] = '\0';
    return resultString;
}


int main()
{
    FILE * ptr= NULL;
    FILE * ptr2= NULL;
    ptr= fopen("bill.txt", "r");
    ptr2= fopen("nis.txt", "w");
    char  str[200];
    fgets(str,200,ptr);
    printf("The given bill templets was:%s\n" , str);

    char * newStr;
    newStr = replaceWord( str, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Laxmi fan outlet");
    newStr = replaceWord(newStr, "{{name}}", "Robis");
      printf("The actual bill generated is: %s\n", newStr);
    printf("The generated bill has been written to the file nis.txt\n");

    fprintf(ptr2, "%s" , newStr);
    fclose(ptr);
    fclose(ptr2);

    return 0;



}