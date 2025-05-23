#include <stdio.h>
 
int main()
{
    int a,b,d,e;
    float c,f,g;
    scanf ("%d %d %f",&a,&b,&c);
    scanf ("%d %d %f",&d,&e,&f);
    g=(b*c)+(e*f);
    printf ("VALOR A PAGAR: R$ %.2f\n",g);
    return 0;
}