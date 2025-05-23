#include<stdio.h>
int main()
{
    char grade;
    printf("Enter your grade:");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
    case 'a':
        printf("Grade %c\n",grade);
        break;
    case 'b':
    case 'B':
        printf("Grade %c\n",grade);
        break;
    case 'c':   
    case 'C':
        printf("Grade %c\n",grade);
        break;
     case 'd':
     case 'D':
        printf("Grade %c\n",grade);
        break;
    case 'f':
    case 'F':
        printf("Grade %c\n",grade);
        break;
    default:
        printf("invalid grade\n");
        break;
    }
    printf("print all time");
    return 0;
}