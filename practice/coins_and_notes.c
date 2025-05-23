#include <stdio.h>
 
int main()
{
    int i,j,k,l,m,n,o,p,q,r,s,t,u,v,x;
    float a;
    scanf("%f",&a);
    i=(100*a)+0.5;
    j=i/10000;
    k=(i%10000)/5000;
    l=((i%10000)%5000)/2000;
    m=(((i%10000)%5000)%2000)/1000;
    n=((((i%10000)%5000)%2000)%1000);
    o=n/500;
    p=(n%500)/200;
    q=(n%500)%200/100;
    r=(((n%500)%200)%100)/50;
    s=(((n%500)%200)%100)%50;
    t=s/25;
    u=(s%25)/10;
    v=((s%25)%10)/5;
    x=(((s%25)%10)%5);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",j);
    printf("%d nota(s) de R$ 50.00\n",k);
    printf("%d nota(s) de R$ 20.00\n",l);
    printf("%d nota(s) de R$ 10.00\n",m);
    printf("%d nota(s) de R$ 5.00\n",o);
    printf("%d nota(s) de R$ 2.00\n",p);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",q);
    printf("%d moeda(s) de R$ 0.50\n",r);
    printf("%d moeda(s) de R$ 0.25\n",t);
    printf("%d moeda(s) de R$ 0.10\n",u);
    printf("%d moeda(s) de R$ 0.05\n",v);
    printf("%d moeda(s) de R$ 0.01\n",x);
    return 0;
}