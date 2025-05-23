#include <stdio.h>
int main()
{
    int m,n;
    while(1)
    {
        scanf("%d %d",&m,&n);
        if (m==0||n==0)
        {
            return 0;
        }
        else
        {
            if (m>0&&n>0)
            {
                printf("primeiro\n");
            }
            else if (m<0&&n>0)
            {
                printf("segundo\n");
            }
            else if (m<0&&n<0)
            {
                printf("terceiro\n");
            }
            else
            {
                printf("quarto\n");
            }
        }
        
    }
}