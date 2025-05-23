#include <stdio.h>
int main()
{
    printf("Enter the size of the matrix: ");
    int n;
    scanf("%d",&n);
    int matr[n][n];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
    printf("\n");
    printf("Printing Diagonal in reverse:\n");
    for (int i = n-1,j=n-1; i>=0,j>=0; i--,j--)
    {
        printf("%d\n",matr[i][j]);
    }
}