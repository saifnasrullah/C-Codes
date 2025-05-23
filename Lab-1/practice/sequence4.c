#include<stdio.h>
int main()
{
for (int i = 0; i < 1; i++)
{
    for (int j = 1; j < 4; j++)
    {
        printf("I=%d J=%d\n", i, j);
    }
}

for (float i = 0.2; i <0.9; i+=0.2)
    {
        for (float j =i+1; j < i+3.2; j++)
        {
            
            printf("I=%.1f J=%.1f\n", i, j);
        }
        
    }
for (int i = 1; i < 2; i++)
    {
        for (int j = 2; j < 5; j++)
        {
            printf("I=%d J=%d\n", i,j);
        }
        
    }
for (float i =1.2; i < 1.9; i+=0.2)
    {
        for (float j = i+1; j < i+3.2; j++)
        {
            printf("I=%.1f J=%.1f\n", i, j);
        }
        
    }
    
    
for (int i = 2; i < 3; i++)
    {
        for (int j = 3; j < 6; j++)
        {
            printf("I=%d J=%d\n", i, j);
        }
        
    }
    
}