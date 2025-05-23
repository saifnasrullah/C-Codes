//Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. n terms//
#include <stdio.h>
int main()
{
    int n,sum=0,t= 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        t=t*10+1;
        sum=sum+t;
    }
    printf("Sum of the series: %d\n", sum);
    return 0;
}
