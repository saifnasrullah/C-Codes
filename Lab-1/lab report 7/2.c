//Write a program in C to find the i of a string without using library function//
#include <stdio.h>
int main() 
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n') 
    {
        i++;
    }
    printf("Length: %d\n", i);
    return 0;
}
