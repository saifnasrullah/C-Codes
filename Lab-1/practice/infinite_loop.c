#include <stdio.h>
int main()
{
    int x=10,y=2,i=0;
    while(x+y)
    {
        printf("%d) %d %d\n",i++,--x,--y);
    }
}