#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (b-a>0)
    {
       printf("O JOGO DUROU %d HORA(S)", b-a); 
       return 0;
    }
    if (b-a<0)
    {
        printf("O JOGO DUROU %d HORA(S)", (24-a)+b);
        return 0;
    }
    if (b-a==0)
    {
       printf("O JOGO DUROU 24 HORA(S)"); 
       return 0;
    }
}