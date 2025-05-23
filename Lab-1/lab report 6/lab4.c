// Write a C program to count frequency of each element in an array.//
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int ele[n], c[100] = {0};
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &ele[i]);
        c[ele[i]]++;
    }
    printf("Frequency of elements:\n");
    for (int i = 0; i < n; i++) 
    {
        if (c[ele[i]] != 0) 
        {
            printf("%d occurs %d times\n", ele[i], c[ele[i]]);
        }
    }
    return 0;
}
