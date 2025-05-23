//Write a C program to find sum of first and last digit of any number.//
#include <stdio.h>
int main()
{
    int n,firstdig,lastdig,sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    lastdig=n % 10;
    while (n >= 10)
    {
        n=n/10;
    }
    firstdig=n;
    sum=firstdig+lastdig;
    printf("Sum of first and last digit: %d\n",sum);
    return 0;
}