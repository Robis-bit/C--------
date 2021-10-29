#include <stdio.h>
int main()
{
  int i;
  

  for(i=1;i<=9;i++)
  {
      if( (i==7)  )
      {
         continue;
      }
      printf("%d ",i);
  }
  return 0;
}