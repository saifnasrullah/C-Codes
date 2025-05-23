#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    scanf("%s", &c); 
    int freq[256]={0};
    int r=strlen(c);
    for (int i = 0; i < r; i++)
    {
        freq[(int)c[i]]++;
    }
    for (int i = 0; i <r ; i++)
    {
        printf("The frequency of %c is %d\n", c[i],freq[(int)c[i]]);
    }
    
}