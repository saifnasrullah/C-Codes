#include<stdio.h>
int main()
{

    int x[50];
    int count=0;
    scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
    for (int i = 0; i < 5; i++)
    {
        if(x[i]%2==0)
        {
            count=count+1;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}