/* Write a C Program to Calculate Area of a Square, take length of one side as user input.*/
#include <stdio.h>
int main() 
{
    float side, area;
    printf("Enter the length of one side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("The area of the square is: %.2f\n", area);
    return 0;
}
