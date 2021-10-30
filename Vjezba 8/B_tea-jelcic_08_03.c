#include <stdio.h>
#include <string.h>

int pozicija(char*string,char c)
{
    char* poz=strchr(strchr(string,c)+1, c);
    if (poz)
        return poz-string+1;
    return -1;
}

int main(void)
{
    char string[]="OfNfofONf";
    char c='O';
    int poz=pozicija(string,c);
    printf("Pozicija drugog pojavljivanja slova %c je %d\n", c, poz);
    return 0;
}
