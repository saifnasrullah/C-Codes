#include <stdio.h>
#include <string.h>
int main()
{
    char cp[200];
    int print=0;
    scanf("%s",cp);
    int length = strlen(cp);
    for (char i = '1'; i <='3' ; i++)
    {
        for (int j = 0; j <length; j+=2)
        {
           if (cp[j] == i)
           {
            if(print)
            printf("+");
            printf("%c",cp[j]);
            print=1;
           }
            
        }
    }
    
}