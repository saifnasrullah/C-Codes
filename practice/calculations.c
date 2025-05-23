#include<stdio.h>
int main()
{
    int x;
    printf("Enter your mark  :");
    scanf("%d",&x);
    if(x<=100&&x>=80)
    {
        printf("Congratulations!Your grade is A+\n");
    }
    else if(75<x&&x<79)
    {
        printf("Your grade is A\n");
    }
    else if(70<=x&&x<=74)
    {
        printf("Your grade is A-\n");
    }
    else if (65<=x&&x<=69)
    {
        printf("Your grade is B+\n");
    }
    else if (60<=x&&x<=64)
    {
        printf("Your grade is B");
    }
    else if(55<=x&&x<=59)
    {
        printf("Your grade is B-");
    }
    else if (50<=x&&x<=54)
    {
        printf("Your grade is C+\n");
    }
    else if (45<=x&&x<=49)
    {
       printf("Your grade is C\n");
    }
    else if (40<=x&&x<=44)
    {
        printf("Your grade is D\n");
    }
    else if (0<=x&&x<=40)
    {
        printf("You Failed\n");
    }
    else
    {
        printf("invalid number\n");
    }
    return 0;
}