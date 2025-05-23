#include <stdio.h>
int main()
{
    int count = 0;
    float c[6];
    scanf("%f %f %f %f %f %f",&c[0],&c[1],&c[2],&c[3],&c[4],&c[5]);
    for(int i=0; i<6; i++)
    {
        if(c[i]>0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);
}