#include <stdio.h>
int main() 
{
    int n;
    int rabcount = 0, ratcount = 0, frcount = 0, total = 0;
    scanf("%d", &n);
    int a[n];
    char c[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d %c", &a[i], &c[i]);
    }
    
    for (int i = 0; i < n; i++) 
    {
        switch (c[i]) {
            case 'C':
                rabcount += a[i];
                break;
            case 'R':
                ratcount += a[i];
                break;
            case 'S':
                frcount += a[i];
                break;
            default:
                break;
        }
    }
    
    total = rabcount + ratcount + frcount;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabcount);
    printf("Total de ratos: %d\n", ratcount);
    printf("Total de sapos: %d\n", frcount);
    printf("Percentual de coelhos: %.2f %%\n", (rabcount * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (ratcount * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (frcount * 100.0) / total);

    return 0;
}
