#include <stdio.h>

void ispisuje (char datoteka[])
{
    int a,i;
    char* str[100];
    FILE* fp=fopen(datoteka,"r");
    if (fp==NULL)
        return NULL;
    while((fscanf(fp,"%d %s", &a,&str))!=EOF)
    {
        for(i=0;i<a;i++)
            printf("%s", str);
        printf("\n");
    }
    fclose(fp);
}

int main (void)
{
    char datoteka[]={"rijeci.txt"};
    ispisuje(datoteka);
    return 0;
}
