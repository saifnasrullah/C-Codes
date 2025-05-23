#include <stdio.h>

int main() 
{
    int a,b,c,d;
    scanf("%d", &a);
    d=a/3600;
    b=a%3600;
    c=b/60;
    b=b%60;
    printf("%d:%d:%d\n",d,c,b);
    return 0;
}
