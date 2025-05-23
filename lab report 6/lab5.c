//Write a C Program to Find trans of a Matrix.//
#include <stdio.h>
int main() 
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int matr[r][c], trans[c][r];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            scanf("%d", &matr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++) 
        {
            trans[j][i] = matr[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) 
    {
        for (int j = 0; j < r; j++) 
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
