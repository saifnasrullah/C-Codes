//Write a C Program to Calculate mean, median and Standard Deviation.//
#include <stdio.h>
#include <math.h>
int main() 
{
    int n;
    float arr[100], sum = 0.0, mean, median, std = 0.0, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }
    mean = sum / n;
    for (int j = 0; j < n - 1; j++) 
        { 
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    int mid = n / 2;
    if (n % 2 == 0) 
    {
        median = (arr[mid - 1] + arr[mid]) / 2.0;
    }
    if (n % 2 != 0) 
    {
        median = arr[mid];
    }
    for (int i = 0; i < n; i++) 
    {
        std = std + (arr[i] - mean) * (arr[i] - mean);
    }
    std = sqrt(std / n);
    printf("Mean = %.2f\n", mean);
    printf("Median = %.2f\n", median);
    printf("Standard Deviation = %.2f\n", std);
    return 0;
}
