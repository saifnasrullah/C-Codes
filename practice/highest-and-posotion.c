#include<stdio.h>
int main()

{
    int n[100];
    int high,position;
    high = 0;
    for (int i = 0; i <100; i++)
    {
        scanf("%d", &n[i]);
        if (n[i]>high)
        {
            high = n[i];
            position = i+1;
        }
        
    }
    printf("%d\n", high);
    printf("%d\n", position);
}