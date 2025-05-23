#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    char new[100];
    printf("Enter a string: ");
    gets(c);
    int n = strlen(c);
    for (int i = n-1,j=0; i >=0; i--,j++)
    {
        new[j] = c[i];
    }
    new[n] = '\0';
    printf("Reversed string: %s",new);

}