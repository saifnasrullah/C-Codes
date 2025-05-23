#include <stdio.h>
#include <string.h>
int main()
{
    char c[50];
    char s[50];
    char t[50];
    scanf("%s %s %s", c,s,t);
    if (strcmp(c,"vertebrado") == 0)
    {
        if (strcmp(s,"mamifero") ==0)
        {
            if (strcmp(t,"onivoro") == 0)
            {
                printf("homem\n");
                return 0;
            }
            else
            {
                printf("vaca\n");
                return 0;
            }
            
        }
        else
        {
            if (strcmp(t,"onivoro") == 0)
            {
                printf("pomba\n");
                return 0;
            }
            else
            {
                printf("aguia\n");
                return 0;
            }
        }
    }
    else if(strcmp(c,"invertebrado") == 0)
    {
        if (strcmp(s,"inseto") == 0)
        {
            if (strcmp(t,"hematofago")==0)
            {
                printf("pulga\n");
                return 0;
            }
            else
            {
                printf("lagarta\n");
                return 0;
            }
        }
        else
        {
            if (strcmp(t,"hematofago")==0)
            {
                printf("sanguessuga\n") ;
                return 0;
            }
            else
            {
                printf("minhoca\n");
                return 0;
            }
        }
        
    }
}