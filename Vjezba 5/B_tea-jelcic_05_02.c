#include <stdio.h>

int funkcija(int a,int b)
{
    int rez;
    rez=(a>=b)?a-b:a+b;
    return rez;
}

int main(void)
{
    int a,b,rez;
    printf("Unesite dva broja:");
    scanf("%d %d", &a,&b);
    rez=funkcija(a,b);
    printf("Rezultat je %d",rez);
    return 0;
}

