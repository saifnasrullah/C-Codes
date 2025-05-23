#include <stdio.h>
int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if (x2-x1 > 0 && y2-y1 > 0)
    {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x2-x1, y2-y1); 
       return 0;
    }
    if (x2-x1 > 0 && y2-y1 < 0)
    {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x2-x1-1, (y2-y1)+60); 
       return 0;
    }
    if(x2-x1 < 0 && y2-y1 < 0)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (24-x1)+x2-1, (y2-y1)+60);
        return 0;
    }
    if (x2-x1 < 0 && y2-y1 > 0)
    {
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (24-x1)+x2, y2-y1);
    }
    
    if (x2-x1==0 || y2-y1==0)
    {
        if (x1,x2==0 && y1,y2==0)
        {
             printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
             return 0;
        }
        else if (x1==0,x2==0 && y1==0 && y2>0)
        {
           printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",y2-y1);
        }
        else if (x1,x2==0 && y2-y1<0)
        {
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",(y2-y1)+60);
        }
        else if (x1==x2 && y2-y1>0)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x2-x1, y2-y1); 
            return 0;
        }
    }
}