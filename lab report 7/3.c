//Write a program in C to count total number of alphabets, digits and special characters in a string.//
#include <stdio.h>
int main() 
{
    char str[100];
    int alp =0, dig =0, sp =0;
    printf("Enter a string: ");
    fgets(str,sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {
            alp++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') 
        {
            dig++;
        } 
        else if (str[i] != '\n' && str[i] != '\0') 
        {
            sp++;
        }
    }
    printf("Alphabates: %d\n", alp);
    printf("Digits: %d\n", dig);
    printf("Special characters: %d\n", sp);
    return 0;
}