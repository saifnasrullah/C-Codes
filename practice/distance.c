#include <stdio.h>
#include <math.h>
int main() 
{
    float a,b,c,d;
    double e;
    scanf("%f %f",&a,&b);
    scanf("%f %f",&c,&d);
    e=sqrt(((b-a)*(b-a))+((d-c)*(d-c)));
    printf("%.4f",e);
    return 0;
}