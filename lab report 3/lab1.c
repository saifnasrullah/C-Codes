/*Write a C program to check whether a given number is odd or even.*/
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num % 2 == 0) 
    {
        printf("Even\n",num);
    }
    else 
    {
        printf("Odd\n",num);
    }
    return 0;
}
