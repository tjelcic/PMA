#include <stdio.h>

int nadi_velicinu( char datoteka[])
{
    FILE* fp=fopen(datoteka,"r");
    if (fp==NULL)
        return 1;
    fseek(fp,0,SEEK_END);
    int rez=ftell(fp);
    fclose(fp);
    return rez;
}

int main (void)
{
    char datoteka[]={"datoteka.txt"};
    int rez=nadi_velicinu(datoteka);
    if (rez!=1)
        printf("Velicina datoteke je: %d bajtova", rez);
    return 0;
}
