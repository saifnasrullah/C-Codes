//Write a program in C to separate odd and even integers in separate arrays.//
#include <stdio.h>
int main() 
{
    int n, i, arr[100], even[100], odd[100], evenc = 0, oddc = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) 
        {
            even[evenc] = arr[i];
            evenc++;
        }
        else 
        {
            odd[oddc] = arr[i];
            oddc++;
        }
    }
    printf("Even: ");
    for (i = 0; i < evenc; i++) 
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    printf("Odd: ");
    for (i = 0; i < oddc; i++) 
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}
