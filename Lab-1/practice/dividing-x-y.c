#include <stdio.h>

int main() 
{
    int n;
    float result;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (y == 0) 
        {
            printf("divisao impossivel\n");
        } 
        else
         {
            result = float(x / y);
            printf("%.1f\n", result);
         }
    }
    return 0;
}