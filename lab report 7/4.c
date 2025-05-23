//Write a program in C to extract a substring from a given string.//
#include <stdio.h>
int main()
{
    char src[100],sub[100];
    int n,len,i;
    printf("Enter a string: ");
    fgets(src,sizeof(src),stdin);
    printf("Enter the starting index: ");
    scanf("%d", &n);
    printf("Enter length: ");
    scanf("%d", &len);
    for (i = 0; i < len && src[n + i] != '\0'; i++) 
    {
        sub[i] = src[n + i];
    }
    sub[i] = '\0';
    printf("Substring: %s\n", sub);
    return 0;
}