
#include <stdio.h>

  
int main()
{
    FILE *fp =NULL;
    fp= fopen("test.txt", "w");

        fputs("writing", fp);
        puts("Done");
        fclose(fp);
    
    return 0;
}