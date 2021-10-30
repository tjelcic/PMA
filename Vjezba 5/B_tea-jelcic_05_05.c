#include <stdio.h>

int setirabitove (int broj, int k)
{
    int novi;
    if (k==1)
        novi=broj | 255;
    else
        novi=broj | (255<<(8*k-8));
    return novi;
}

int main (void)
{
    int broj,k;
    unsigned novi;
    printf("Unesite broj:");
    scanf("%d",&broj);
    printf("Unesite redni broj bajta:");
    scanf("%d",&k);
    novi=setirabitove(broj,k);
    printf("Novi broj je %u",novi);
    return 0;
}
