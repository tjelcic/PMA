#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int samoglasnik (char c)
{
    if ( c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U' ) return 1;
    else return 0;
}

void modificira (char string [])
{
    int i=0;
    int cnt=strlen(string);
    while (i<cnt)
    {
        if (samoglasnik(string[i]))
        {
            memmove(string+i,string+i+1,cnt-1);
            --cnt;
        }
        else
            ++i;
    }
}

int main (void)
{
    char string[]="Popokatepetl";
    modificira(string);
    printf("%s",string);
    return 0;
}

