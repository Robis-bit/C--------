
#include<stdio.h>

 
int string_ln(char*p) 
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
 
int main() {
   char str[100];
   int length;
   
   
   printf("\nEnter any string : ");
   gets(str);
   
   length = string_ln(str);
   printf("The length of the given string %s is : %d", str, length);
   return 0;  
}
 
