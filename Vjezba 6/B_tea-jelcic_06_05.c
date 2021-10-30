#include <stdio.h>

void funkcija (unsigned niz[],unsigned *ps, unsigned* pp, unsigned m, unsigned n)
{
    unsigned i;
    *ps=0;
    *pp=1;
    for (i=niz[m];i<n;i++)
        {
            *ps += niz[i];
            *pp *= niz[i];
        }
}

void unos_niz(unsigned niz[], unsigned br)
{
    unsigned i;
    printf("Unesite clanove niza:");
    for (i=0;i<br;i++)
        scanf("%u",&niz[i]);
}

int main(void)
{
    int niz[10];
    unsigned m,n,i,br,s,p;
    printf("Unesite broj clanova niza:");
    scanf("%u",&br);
    unos_niz(niz,br);
    printf("Unesite dva broja manja od broja clanova niza:");
    scanf("%u %u",&m,&n);
    funkcija(niz,&s,&p,m,n);
    printf("Suma elemenata izmedu m i n je %u, a produkt %u.", s,p);
    return 0;
}
