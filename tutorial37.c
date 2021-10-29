#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} robis, ravi, shubham;

void print()
{
    printf("%s", robis.name);
}

int main()
{
    robis.id = 1;
    ravi.id = 2;
    shubham.id = 3;
    robis.marks = 66;
    ravi.marks = 466;
    shubham.marks = 46;
    robis.fav_char = 'a';
    ravi.fav_char = 'b';
    shubham.fav_char = 'c';
  //  strcpy(robis.name, "Robis kumar");
  strcpy(shubham.name, "Shubham Kumar");
     printf("Robis got %d marks\n", robis.marks);
     printf("Robis's name is: %s\n", robis.name);
     printf("Shubham got %d marks\n", shubham.marks);
     printf("Shubham's name is: %s\n", shubham.name);
    

    return 0;
}
