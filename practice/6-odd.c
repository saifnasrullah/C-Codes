#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int count=1; count <= 6; a++)
    {
        if (a%2!=0)
        {
            printf("%d\n",a);
            count++;
        }
        
    }
    return 0;
    
}