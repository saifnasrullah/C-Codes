#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    int y;
    int count=0;
    int matr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&matr[i][j]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <5; j++)
        {
            if (matr[i][j]==1)
            {
                x=i;
                y=j;
                goto end;
            }
            
        }
        
    }
    end:    
    while (x!=2)
    {
        if (x>2)
        {
            x--;
            count++;
        }
        else
        {
            x++;
            count++;
        }
    }
    while (y!=2)
    {
        if (y>2)
        {
            y--;
            count++;
        }
        else
        {
            y++;
            count++;
        }
    }
    printf("%d",count);
}