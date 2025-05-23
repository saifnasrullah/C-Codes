#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int count=x/5;
    int b=x%5;
    for (int i = 4 ; i >0 ; i--)
    {
        if (b>=i)
        {
        b=b-i;
        count++;
        }
        
    }
    printf("%d", count);
    
}