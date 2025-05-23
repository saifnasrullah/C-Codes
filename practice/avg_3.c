#include<stdio.h>
int main()
{
    float x,y,z,a;
    scanf("%f%f%f%f",&x,&y,&z,&a);
    float avg;
    avg=(x*2+y*3+z*4+a*1)/(2+3+4+1);
    printf("Media: %.1f\n",avg);
    if(avg>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if(avg<5)
    {
        printf("Aluno reprovado.\n");
        
    }
    if(avg>=5 && avg<7)
    {
        printf("Aluno em exame.\n");
        float b,avg2;
        scanf("%f",&b);
        printf("Nota do exame: %.1f\n",b);
        avg2=(avg+b)/2;
        if(avg2>=5)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");

        }
        printf("Media final: %.1f\n",avg2);
    }
    return 0;
    
}