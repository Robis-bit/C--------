#include <stdio.h>

union employee
{
    float basic, da, hra;
    float it;
    float net_salary;
};

int main()
{
    union employee em;

    em.basic;
    em.da;
    em.hra;
    
    em.it;
    em.net_salary=0;

    printf("Enter Basic Salary ($): ");
    scanf("%f", &em.basic);
    printf("Enter HRA ($): ");
    scanf("%f", &em.hra);
    
 printf("Enter DA ($): ");
    scanf("%f", &em.da);
    printf("Enter IT ($): ");
    scanf("%f", &em.it);
    

    em.net_salary = em.basic + em.da + em.hra  -  em.it;

    printf("Net Salary is: $ %f\n", em.net_salary);

    return 0;
}