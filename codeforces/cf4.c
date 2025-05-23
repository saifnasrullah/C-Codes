#include <stdio.h>
#include <string.h>
int main()
{
    int x=0;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        char c[4];
        scanf("%s",c);
    
    if (strcmp(c,"++X")==0)
    {
        x++;
    }
    else if (strcmp(c,"--X")==0)
    {
        x--;
    }
    else if (strcmp(c,"X++")==0)
    {
        x++;
    }
    else if (strcmp(c,"X--")==0)
    {
        x--;
    }
    }
    printf("%d",x);


}