#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    
    if(a>=b+c||b>=a+c||c>=a+b) 
    {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(a,2)+pow(b,2))
    {
        printf("TRIANGULO RETANGULO\n");
            if ((a==b&&b!=c)||(a==c&&b!=c)||(b==c&&b!=a))
            {
                printf("TRIANGULO ISOSCELES\n");

            }
    }
    if ((pow(a,2)>pow(b,2)+pow(c,2))||(pow(b,2)>pow(c,2)+pow(a,2))||(pow(c,2)>pow(a,2)+pow(b,2)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
            if ((a==b&&b!=c)||(a==c&&b!=c)||(b==c&&b!=a))
            {
                printf("TRIANGULO ISOSCELES\n");

            }
    }
    if ((pow(a,2)<pow(b,2)+pow(c,2))&&(pow(b,2)<pow(c,2)+pow(a,2))&&(pow(c,2)<pow(a,2)+pow(b,2)))
    {
        printf("TRIANGULO ACUTANGULO\n");
            if ((a==b&&b!=c)||(a==c&&b!=c)||(b==c&&b!=a))
            {
                printf("TRIANGULO ISOSCELES\n");

            }
    }
    if (a==b&&b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
        return 0;
    }
    
}
    
    
    
    
