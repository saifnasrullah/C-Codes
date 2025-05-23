#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        
        int x=0;
        char c[100];
        scanf("%s", &c);
        x=strlen(c);
        if (x>10)
        {
            printf("%c%d%c\n", c[0], x-2, c[x]);
        }
        else
        {
            printf("%s\n", c);
        }

    }
    
    
}