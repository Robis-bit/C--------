#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    switch (age)

    {
    case 18:
    printf("your Age is 18");
    
        break;
      case 20:
    printf("your Age is 20");
     break;
    default:
    printf("none of this");

        break;
    }
}