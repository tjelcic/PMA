#include <stdio.h>

unsigned suma (unsigned niz[], unsigned n)
{
    unsigned suma=0;
    for (int i=0;i<n;i++)
    {
        if (i%2!=0)
            suma+=niz[i];
    }
    return suma;
}

int main(void)
{
    int niz[10];
    unsigned zbroj, n,i;
    printf("Unesite broj clanova niza:");
    scanf("%u",&n);
    printf("Unesite clanove niza:");
    for (i=0;i<n;i++)
        scanf("%u",&niz[i]);
    zbroj=suma(niz,n);
    printf("Suma elemenata na neparnim mjestima je %u", zbroj);
    return 0;
}
