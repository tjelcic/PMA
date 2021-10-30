#include <stdio.h>

int vraca (int n)
{
    int rez;
    if (n%2==1)
        rez=(3*n)+1;
    else
        rez=n/2;
    return rez;
}

int main(void)
{
    int n,rez;
    printf("Unesite broj:");
    scanf("%d",&n);
    rez=vraca(n);
    printf("Rezultat je %d",rez);
    return 0;
}
