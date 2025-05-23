/*Write a C program to enter two numbers and perform all arithmetic operations.*/
#include <stdio.h>
int main()
{
    int num1,num2;
    int sum,difference,product,division,modulus;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    sum =num1+num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = num1 / num2;
    printf("Addition: %d\n", sum);
    printf("Subtraction: %d\n", difference);
    printf("Multiplication: %d\n", product);
    printf("Division: %d\n",division);
    return 0;
}