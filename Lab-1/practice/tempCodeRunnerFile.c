#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int matrix[n][n];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf(" Printing Diagonal in reverse:\n");
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = n-1; j >= 0; j--)
        {
            if (i == j)
            {
                printf("%d ", matrix[i][j]);
            }
            
        }
    }

} 