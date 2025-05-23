#include <stdio.h>
 
int main() 
{
    int x, y;
    float c;
    scanf("%d %d",&x,&y);
    if (x ==1)
    {
        c=4*y;
    }
    if (x ==2)
    {
        c=4.5*y;
    }   
    if(x == 3 )
    {
        c=5*y;
    }
    if(x == 4)
    {
        c=2*y;
    }
    if(x == 5)
    {
        c=1.5*y;

    }
    printf("Total: R$ %.2f\n",c);
    return 0;
}