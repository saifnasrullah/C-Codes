#include <stdio.h>
#include <string.h>
int main()
{
 char str[1];
 int n;
 scanf(" %s %d",&str[0], &n);
 if (strcmp(str,"N")==0)
 {
    for (int i = 0; i < n; i++)
    {
        printf("Feliz Ano Nuevo\n");
    }
    return 0;
 }
 else
 {
   for (int i = 0; i < n; i++)
   {
      printf("Happy New Year\n");
   }
   return 0;
 }
 
}