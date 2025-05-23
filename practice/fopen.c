#include <stdio.h>
#include <string.h>
int main()
{
    FILE *saif;
    char inputdata[256];
    saif = fopen("saif.txt", "w");
    if (saif==NULL)
    {
        printf("ERROR");
    }
    else
    {
        printf("Enter data to write in file:(press cntrl+C to stop)\n");
        while (fgets(inputdata, 256, stdin) !=NULL)
        {
            fputs(inputdata, saif);  
        }
        fclose(saif);
        return 0;
    }
}