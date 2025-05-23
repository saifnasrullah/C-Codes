#include <stdio.h>
int main()
{
    int n1,n2;
    int count=0;
    scanf("%d %d",&n1,&n2);
    while(n1<=n2)
    {
        n1*=3;
        n2*=2;
        count++;
    }
    printf("%d",count);
}