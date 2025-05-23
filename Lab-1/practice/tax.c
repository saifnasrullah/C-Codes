#include <stdio.h>
int main()
{
    float x,y;
    scanf("%f",&x);
    if (x>2000.00)
    {
        if (x>2000.00&&x<=3000.00)
        {
            y=0.08*(x-2000.00);
        }
        if (x>3000.00&&x<=4500.00)
        {
            y=(0.18*(x-3000.00))+80;
        }
        if (x>4500.00)
        {
            y=(0.28*(x-4500.00))+270+80;
        }
        printf("R$ %.2f\n",y);
        return 0;
        
        
    }
    else
    {
        printf("Isento\n");
        return 0;
    }
    
}