/*Write a C Program to Calculate Area of a Rectangle, take height and width as user input*/
#include <stdio.h>
int main() 
{
    float height, width, area;
    printf("Enter the height of the rectangle: ");
    scanf("%f", &height);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    area = height * width;
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}