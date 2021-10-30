#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* root (char string[])
{
    int poz1, poz2, d,i=0;
    char* novi=(char*)malloc(strlen(string)*1);
    if (novi==NULL) return 0;
    poz1=strstr(string,"www");
    poz2=strstr(string,".com");
    d=poz2-poz1 + 4;
    memmove(novi,poz1,d+1);
    return novi;
}

int main (void)
{
    char string[]="http://www.hackcanada.com/ice3/2600/2600_15-3_p10.txt";
    char *novi=root(string);
    puts(novi);
    free(novi);
    return 0;
}
