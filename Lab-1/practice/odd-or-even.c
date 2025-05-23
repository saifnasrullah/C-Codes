#include<stdio.h>
int main()
{
    
    int n=0;
    scanf("%d",&n);
    int c[n];
    for (int i=0; i < n; i++)
    {
        scanf("%d",&c[i]);
    }
    
    for (int i = 0; i < n; i++)
    { 
        if (c[i]==0)
        {
            printf("NULL\n");
            
        }
        else if (c[i]%2==0)
        {
            if (c[i]>0)
            {
                printf("EVEN POSITIVE\n");
                
            }
            else 
            {
                printf("EVEN NEGATIVE\n");
                
            }
        }
        else if (c[i]%2!=0)
        {
            if (c[i]>0)
            {
                printf("ODD POSITIVE\n");
                
            }
            else 
            {
                printf("ODD NEGATIVE\n");
                
            }
        }
    } 
}