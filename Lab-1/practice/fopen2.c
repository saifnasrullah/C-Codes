#include <stdio.h>
int main()
{
    FILE *saif;
    char ch;
    int vowels=0, consonants=0, digits=0, others=0;
    saif = fopen("saif.txt", "r");
    if (saif==NULL)
    {
        printf("ERROR");
    }
    else
    {
        while (ch!=EOF)
        {
            ch=fgetc(saif);
            if (ch>='A' && ch <= 'Z')
            {
                if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                {
                    vowels++;
                }
                else
                {
                    consonants++;
                }
                
            }
            else if (ch>='a' && ch <= 'z')
            {
                if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                {
                    vowels++;
                }
                else
                {
                    consonants++;
                }
            }
            else if (ch>='0' && ch <= '9')
            {
                digits++;
            }
            else
            {
                others++;
            }
        }
    }
    fclose(saif);
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nOthers: %d\n", vowels, consonants, digits, others);
}
