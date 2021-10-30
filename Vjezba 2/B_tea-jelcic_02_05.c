#include <stdio.h>

int main(void)
{
    int a,b,n,i,suma=0;
    printf("Unesite interval:");
    scanf("%d %d", &a, &b);
    printf("Unesite broj n:");
    scanf("%d", &n);

    i=a+n-1;
    while(i<=b)
    {
        suma+=i;
        i+=n;
    }
    return suma;
}
