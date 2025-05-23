// Write a C program to calculate product of digits of any number//
#include <stdio.h>
int main()
{
    int n,pro=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n)
    {
        pro = pro*(n % 10);
        n = n/10;
    } 
    printf("Product of digits: %d\n", pro);
    return 0;
}
