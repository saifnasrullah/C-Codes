/*Write a C program to check whether a year is leap year or not.*/
#include <stdio.h>
int main() 
{
    int year;
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
    return 0;
}
