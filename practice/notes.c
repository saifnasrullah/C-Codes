#include <stdio.h>
 
int main()
{
    int i,j,k,l,m,n,o,p,q;
    scanf("%d",&i);
    j=i/100;
    k=(i%100)/50;
    l=((i%100)%50)/20;
    m=(((i%100)%50)%20)/10;
    n=((((i%100)%50)%20)%10);
    o=n/5;
    p=(n%5)/2;
    q=(n%5)%2/1;
    printf("%d\n",i);
    printf("%d nota(s) de R$ 100,00\n",j);
    printf("%d nota(s) de R$ 50,00\n",k);
    printf("%d nota(s) de R$ 20,00\n",l);
    printf("%d nota(s) de R$ 10,00\n",m);
    printf("%d nota(s) de R$ 5,00\n",o);
    printf("%d nota(s) de R$ 2,00\n",p);
    printf("%d nota(s) de R$ 1,00\n",q);
    return 0;
}