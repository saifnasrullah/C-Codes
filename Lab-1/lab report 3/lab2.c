/*Write a C program to check whether a number is divisible by 5 and 11 or not.*/
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 11 == 0)
     {
        printf("The number %d is divisible by 5 and 11\n", n);
    }
    else 
    {
        printf("The number %d is not divisible by 5 and 11\n", n);
    }
    return 0;
}
