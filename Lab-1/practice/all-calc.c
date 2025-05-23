#include<stdio.h>
int main()
{

    int x[50];
    int countpos=0,counteven=0,countnig=0,coutodd=0;
    scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
    for (int i = 0; i < 5; i++)
    {
        if(x[i]%2==0)
        {
            counteven=counteven+1;
        }
        if (x[i]%2!=0)
        {
            coutodd=coutodd+1;
        }
        if (x[i]>0)
        {
            countpos=countpos+1;
        }
        if (x[i]<0)
        {
            countnig=countnig+1;
        }
        
    }
    printf("%d valores pares\n",counteven); 
    printf("%d valores impares\n",coutodd);
    printf("%d valores positivos\n",countpos);
    printf("%d valores negativos\n",countnig);
    return 0;
}