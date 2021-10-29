#include<stdio.h>  
#include <string.h>    
struct employee{    
char id ;
int age;    
char name[10];    
};    
int main(){    
int i;    
struct employee em[5];    
printf("Enter Records of 5 students");    
for(i=0;i<5;i++){    
printf("\nEnter id %d:", i++);    
scanf("%c",&em[i].id); 
printf("\nEnter age %d:",i++);       

scanf("%d",&em[i].age); 
printf("\nEnter Name %d:",i++);   
scanf("%s",&em[i].name);    
}    
printf("\nEmployee Information List:");    
for(i=0;i<5;i++){    
printf("\nid:%c,\n:%d Name:%s",em[i].id,em[i].age,em[i].name);    
}    
   return 0;    
} 