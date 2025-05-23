#include <stdio.h>
#include <string.h>
int main()
{
    char cc[256];
    int count=0;
    scanf("%s", cc);
    int len = strlen(cc);
    int n[len];
    for (int i = 0; i < len; i++)
    {
        n[i]=1;
    }
    for (int i = 0; i < len; i++)
    {
        if (n[i] ==1)
        {
            count++;
            for (int j = 0; j < len; j++)
            {
            if (cc[i] == cc[j])
            {
                n[j]--;
            }
            }
        }
    }

    if (count%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}