#include<stdio.h>
#include<string.h>
struct book
{
    int price;
    int total_pages;
    char Book_name[50];

};
int main()
{
    struct book st;
    st.price =349;
    st.total_pages =507;
    
    strcpy(st.Book_name,"Love And Fight");


    printf("%d\n", st.price);
    printf("%d\n", st.total_pages);
    printf("%s", st.Book_name);
    
     return 0;
}