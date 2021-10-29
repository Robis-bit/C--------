#include <stdio.h>
struct employee {
    char Name[50];
    
    int age;
    char address;
} ;

int main() {
  struct employee em[5];
    int i;
    printf("Enter information of employee:\n");

    
    for (i = 0; i < 5; ++i) {
        
        
        printf("Enter  name: ");
        scanf("%s", em[i].Name);
        
        printf("Enter age: ");
        scanf("%d", &em[i].age);
        
    }
    printf("Displaying Information:\n\n");

    
    for (i = 0; i < 5; ++i) {
        
        printf(" name: ");
        puts(em[i].Name);
        printf("AGE: %d", em[i].age);
            
        printf("\n");
    }
    return 0;
}
