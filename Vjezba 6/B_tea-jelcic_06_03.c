#include <stdio.h>

void unos_niz(unsigned niz[], unsigned n)
{
    unsigned i;
    printf("Unesite clanove niza:");
    for (i=0;i<n;i++)
        scanf("%u",&niz[i]);
}

void ispis_niz(unsigned niz[], unsigned n)
{
    unsigned i;
    for (i=0;i<n;i++)
        printf("%u ",niz[i]);
}

float prosjecna (unsigned niz[], unsigned n)
{
    int i;
    float suma=0, prosjek;
    for (i=0;i<n;i++)
        suma+=niz[i];
    prosjek=suma/n;
    return prosjek;
}

int main(void)
{
    int niz[10];
    unsigned n;
    float prosjek;
    printf("Unesite broj elemenata niza:");
    scanf("%u",&n);
    unos_niz(niz,n);
    ispis_niz(niz,n);
    prosjek=prosjecna(niz,n);
    printf("\nProsjecna vrijednost elemenata niza je %f", prosjek);
    return 0;
}
