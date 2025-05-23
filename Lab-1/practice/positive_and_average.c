#include<stdio.h>
int main()
{

    float x[50];
    int count=0;
    float avg,vibe=0.0;
    scanf("%f %f %f %f %f %f", &x[0], &x[1], &x[2], &x[3], &x[4], &x[5]);
    for (int i = 0; i < 6; i++)
    {
        if(x[i]>0)
        {
            count=count+1;
            vibe+=x[i];
        }
    }
    avg=vibe/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
    return 0;
}