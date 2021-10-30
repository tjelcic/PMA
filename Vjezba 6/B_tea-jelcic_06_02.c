#include <stdio.h>

void suma_produkt (unsigned broj, unsigned* ps,unsigned* pp)
{
    unsigned znam;
    *ps=0;
    *pp=1;
    while (broj>0)
    {
        znam=broj%10;
        *ps += znam;
        *pp *= znam;
        broj /= 10;
    }
}

int main(void)
{
    unsigned broj, s, p;
    printf("Unesite broj:");
    scanf("%u", &broj);
    suma_produkt(broj, &s, &p);
    printf("Suma znamenki broja je %u, a produkt %u.", s, p);
    return 0;
}

