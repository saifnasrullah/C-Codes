/*Write a Program to take the value from the user as input any alphabet and check whether it is vowel or
 consonant*/
#include <stdio.h>
int main() 
{
    char ch;
    scanf(" %c", &ch);
    switch (ch) 
    {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }
    return 0;
}
