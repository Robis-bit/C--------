#include <stdio.h>

struct Student
{
    int id;
    int marks;
    char fav_char;
} robis, ravi, shubham;



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

printf("Robis id is%d\nRobis  marks is %d\nRobis fav Char is %c\n" , robis.id,  robis.marks , robis.fav_char);
    return 0;
}
