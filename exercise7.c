#include <stdio.h>

struct driver
{
    char name[34];
    char id[34];
    char route[34];
    int kms;
};

int main()
{
    struct driver d1, d2, d3;
    printf("Enter the details of driver\n");
    printf("Name of driver 1\n");
    scanf("%s", &d1.name);
    printf("ID of driver 1\n");
    scanf("%s", &d1.id);
    printf("route of driver 1\n");
    scanf("%s", &d1.route);
    printf("KMS of driver 1\n");
    scanf("%d", &d1.kms);
    printf("Name of driver 2\n");
    scanf("%s", &d2.name);
    printf("ID of driver 2\n");
    scanf("%s", &d2.id);
    printf("route of driver 2\n");
    scanf("%s", &d2.route);
    printf("KMS of driver 2\n");
    scanf("%d", &d2.kms);
    printf("Name of driver 3\n");
    scanf("%s", &d3.name);
    printf("ID of driver 3\n");
    scanf("%s", &d3.id);
    printf("route of driver 3\n");
    scanf("%s", &d3.route);
    printf("KMS of driver 3\n");
    scanf("%s", &d3.kms);

    printf("****Information of drivers****\n");
    printf("Name of driver 1 is %s\n", d1.name);
    printf("ID of driver 1 is %s\n", d1.id);
    printf("Route of driver 1 is %s\n", d1.route);
    printf("KMS of driver 1 is %d\n", d1.kms);
    printf("Name of driver 2 is %s\n", d2.name);
    printf("ID of driver 2 is %s\n", d2.id);
    printf("Route of driver 2 is %s\n", d2.route);
    printf("KMS of driver 2 is %d\n", d2.kms);
    printf("Name of driver 3is %s\n", d3.name);
    printf("ID of driver 3 is %s\n", d1.id);
    printf("Route of driver 3 is %s\n", d1.route);
    printf("KMS of driver 3 is %d\n", d3.kms);

    return 0;
}
