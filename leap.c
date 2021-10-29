#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   
   if (year % 1200 == 0) {
      printf("%d is a leap year.", year);
   }
   
   else if (year % 500 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 350 == 0) {
      printf("%d is a leap year.", year);
   }
   
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}