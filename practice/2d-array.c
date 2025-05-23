#include <stdio.h>
int main()
{
    int a[5][2]=
    {
        {0,0},
        {1,2},
        {2,4},
        {3,6},
        {4,8}
    };
    for (int i = 4; i > 0; i--)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d %d\n",a[i],a[j]);
        }
        
    }
    

}