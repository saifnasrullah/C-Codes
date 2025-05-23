#include<stdio.h>
int main()
{
    
    int countin=0,countout=0,n=0;
    scanf("%d",&n);
    int c[n];
    for (int i=0; i < n; i++)
    {
        scanf("%d",&c[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (c[i] >= 10 && c[i] <=20)
        {
            
            countin++;
        }
        if (c[i] < 10 || c[i] >20)
        {
            countout++;
        }
        
        
    }
    printf("%d in\n",countin);
    printf("%d out\n",countout);
    
    
}