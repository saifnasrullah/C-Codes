//Write a C program to add two numbers (5 and 8) and display its sum like (5 + 8 = 13).//
#include <stdio.h>
int main() 
{
    int num1 = 5;
    int num2 = 8;
    int sum;
    sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    return 0;
}