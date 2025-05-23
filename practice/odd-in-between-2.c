#include <stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 int a[n];
 int b[n];
 int sum[n];
 for (int i = 0; i < n; i++)
 {
    sum[i] = 0;
 }
 
 int lim[n];
 int lim2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i],&b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            lim[i] = b[i];
            lim2[i] = a[i];
        }
        else
        {
            lim[i] = a[i];
            lim2[i] = b[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = lim[i]+1; j < lim2[i]; j++)
        {
            if (j%2!=0)
            {
                sum[i]=sum[i]+j;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", sum[i]);
    }
    
      
}