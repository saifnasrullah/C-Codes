/* Write a C program to enter marks of five subjects and calculate total and average marks.*/
#include <stdio.h>
int main() 
{
    float mark1, mark2, mark3, mark4, mark5, total, average;
    printf("Enter marks for subject 1: ");
    scanf("%f", &mark1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &mark2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &mark3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &mark4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &mark5);
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    average = total / 5;
    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    return 0;
}