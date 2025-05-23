//Write a C program to find frequency of each digit in a given integer.//
#include <stdio.h>
int main() 
{
    int n,digit;
    int fre[10]={0};
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) 
    {
        digit = n%10;
        fre[digit]++;
        n=n/10;
    }
    for (int i = 0; i < 10; i++) {
        if (fre[i] > 0) 
        {
            printf("%d: %d\n", i, fre[i]);
        }
    }

    return 0;
}