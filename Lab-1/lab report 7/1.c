//Write a C Program to Find the Frequency of Characters in a String.//
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100]={0};
    int freq[256] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        freq[(int)str[i]]++;
    }
    for (int i = 0; i < 100; i++) 
    {
        if (freq[(int)str[i]] != 0&& str[i]!='\n') 
        {
            printf("%c : %d times\n", str[i], freq[(int)str[i]]);
        }
    }
    return 0;
}