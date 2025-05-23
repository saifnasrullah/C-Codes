#include <stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if (a<b+c&&a+b>c&&b<a+c)
    {
        printf("Perimetro: %.1f\n",a+b+c);
    }
    else
    {
        float area = 0.5*(a+b)*c;
        printf("Area: %.1f\n",area);
    }
    return 0;
}