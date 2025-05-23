#include <stdio.h>
#include <string.h>
int main()
{
    int length,c1,c2;
    char ch[100];
    char ch2[100];
    scanf("%s", ch);
    scanf("%s", ch2);
    strlwr(ch);
    strlwr(ch2);
    length=strlen(ch);
    for (int i = 0; i < length; i++)
    {
        c1=ch[i];
        c2=ch2[i];
        if (c1!=c2)
        {break;}
    }
    if (c1==c2)
    {
        printf("0");
    }
    else if (c1>c2)
    {
        printf("1");
    }
    else if (c1<c2)
    {
        printf("-1");
    }
    return 0;
}