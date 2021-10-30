#include <stdio.h>

int provjera (int broj, int k)
{
    if (broj & (1<<k))
        return 1;
    else
        return 0;
}

int setira(int broj, int k)
{
    int rez;
    if (provjera==1)
        return broj;
    else
        rez=(1<<k) | broj;
        return rez;
}

int main (void)
{
    int broj,k,rez;
    printf("Unesite broj:");
    scanf("%d", &broj);
    printf("Unesite poziciju bita za setiranje:");
    scanf("%d",&k);
    rez=setira(broj,k);
    printf("Novi broj je %d",rez);
    return 0;
}
