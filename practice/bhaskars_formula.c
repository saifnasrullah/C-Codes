#include <stdio.h>
#include <math.h> 
int main() 
{
    float a,b,c,d,e;
    scanf("%f %f %f",&a,&b,&c);
    if ((b*b)-(4*a*c)>0&&a>0)
    {
        d=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        e=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("R1 = %.5f\nR2 = %.5f\n",d,e);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    
    
    return 0;
}