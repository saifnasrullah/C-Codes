#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    char cc[n + 1];
    scanf("%s", cc);
    for (int i = 0; i < strlen(cc); i++)
    {
        while (cc[i] == cc[i + 1])
        {
            int j = i;
            while (cc[j + 1] != '\0')
            {
                cc[j + 1] = cc[j + 2];
                j++;
            }
            count++;
        }
    }
    printf("%d\n", count);
}
