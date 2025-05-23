//Write a C program to swap first and last digits of any number.//
#include <stdio.h>
int main() 
{
    int n, temp, pwr = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 10) 
    {
        printf("Swapped number: %d\n", n);
        return 0;
    }
    int lastdig = n % 10, firstdig;
    temp = n;
    while (temp >= 10)
    {
        firstdig = temp / 10;
        temp = temp / 10;
        pwr = pwr*10;
    }
    int swappedNumber = (lastdig * pwr) + (n % pwr / 10 * 10) + firstdig;
    printf("Swapped number: %d\n", swappedNumber);
    return 0;
}
