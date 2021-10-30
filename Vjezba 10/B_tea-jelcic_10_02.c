#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* znakpoznak(char datoteka[])
{
    char c;
    int n=0;

    FILE* fp=fopen(datoteka,"r");
    if (fp==NULL)
        return NULL;
    fseek(fp,0,SEEK_END);
    int size=ftell (fp);
    fseek(fp, 0, SEEK_SET);
    char*string=malloc(size);

    while((c=fgetc(fp))!=EOF)
    {
        if (islower(c))
            string[n++]=(char)c;
    }
    string[n]='\0';
    fclose(fp);
    return string;
}

int main (void)
{
    char datoteka[]={"mala.txt"};
    char *novi=znakpoznak(datoteka);
    puts(novi);
    free(novi);
    return 0;
}
