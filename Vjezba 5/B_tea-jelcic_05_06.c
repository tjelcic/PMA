#include <stdio.h>

int nule (unsigned broj)
{
    int nule = 32;
    while(broj)
    {
        broj>>=1;
        --nule;
    }
    return nule;
}

int main (void)
{
    unsigned broj;
    int rez;
    printf("Unesite broj:");
    scanf("%u",&broj);
    rez=nule(broj);
    printf("Broj vodecih nula je %d",rez);
    return 0;
}
