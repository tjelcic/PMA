#include <stdio.h>

int najmanji (int a,int b,int c)
{
    int najm=a;
    najm=(b<najm)?b:najm;
    najm=(c<najm)?c:najm;
    return najm;
}

int main(void)
{
    int a,b,c,najm;
    printf("Unesite tri broja:");
    scanf("%d %d %d",&a,&b,&c);
    najm=najmanji(a,b,c);
    printf("Najmanji broj je %d",najm);
    return 0;
}
