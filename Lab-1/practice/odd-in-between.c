#include <stdio.h>
int main()
{
    int a,b;
    int lim1, lim2;
    int sum=0;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < b)
    {
        lim1=a;
        lim2=b;
    }
    else
    {
        lim1=b;
        lim2=a;
    }
    
    for (int i=lim1+1;i>lim1, i <lim2; i++)
    {   
        if (i%2!=0)
    {
        sum=sum+i;
    }
    
       
    }
    printf("Sum: %d\n", sum);
}