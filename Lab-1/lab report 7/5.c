//Write a program in C to replace the spaces of a string with a specific character.//
#include <stdio.h>
int main() 
{
    char str[100], re;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter replacement: ");
    scanf("%c", &re);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ') 
        {
            str[i] = re;
        }
    }
    printf("Modified string: %s", str);
    return 0;
}