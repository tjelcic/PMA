#include <stdio.h>

void funkcija (unsigned m, unsigned n, unsigned*pm, unsigned*pn)
{
    if (m%2==0)
        *pm=m/2;
    else
        *pm=m;
    *pn=3*n+1;
}

int main(void)
{
    unsigned m, n, prvi, drugi;
    printf("Unesite dva prirodna broja:");
    scanf("%u %u", &m,&n);
    funkcija(m,n,&prvi,&drugi);
    printf("Nove vrijednosti brojeva su %u i %u", prvi, drugi);
    return 0;
}
