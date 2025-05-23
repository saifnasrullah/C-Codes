#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float a[3*n];
    float b[n];
    for (int i = 0,j=0; i < 3*n; i+=3,j++)
    {
        
        scanf("%f %f %f",&a[i],&a[i+1],&a[i+2]);
        b[j] = (a[i]*2 + a[i+1]*3 + a[i+2]*5)/10;
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%.1f\n",b[i]);
    }
    
    
}