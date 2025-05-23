#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cpb,bal,total;;
    scanf("%d %d %d",&cpb,&bal,&total);
    for (int i = 1; i < total+1; i++)
    {
        int tempcpb=i*cpb;
        bal=bal-tempcpb;
    }
    if(bal>0)
    {
        bal=0;
    }
    else
    {
    bal=abs(bal);
    }
    printf("%d",bal);
}