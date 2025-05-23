#include <stdio.h>
int facto(int a);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",facto(a));
}
int facto(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * facto(a - 1);
    }
}