#include<stdio.h>
float salary(float a,float b)
    {
        float c;
        c = a + (a * b);
        return c;
    }
int main()
{
    float s,e,f;
    scanf("%f", &s);
    if(s>0&&s<=400.00)
    {
        e=salary(s,0.15);
        f=e-s;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15\n", e, f);
        return 0;
    }
    if (s>400.00&&s<=800.00)
    {
        e=salary(s,0.12);
        f=e-s;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12\n", e, f);
        return 0;
    }
    if (s>800.00&&s<=1200.00)
    {
        e=salary(s,0.10);
        f=e-s;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10\n", e, f);
        return 0;
    }
    if (s>1200.00&&s<=2000.00)
    {
        e=salary(s,0.07);
        f=e-s;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7\n", e, f);
        return 0;
    }
    if (s>2000.00)
    {
        e=salary(s,0.04);
        f=e-s;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4\n", e, f);
    }
    
    
}