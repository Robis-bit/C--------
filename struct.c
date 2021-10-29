// #include<stdio.h>
// #include<string.h>

#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks;
} s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
       scanf("%s", &s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%d", &s.marks);

    printf("Displaying Information:\n");
    
    printf(" Name %s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %d\n", s.marks);

    return 0;
}