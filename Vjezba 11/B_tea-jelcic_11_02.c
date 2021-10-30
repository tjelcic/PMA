#include <stdio.h>

int suma (int n, int m)
{
    if (n==0)
        return 0;
    else if (n%m==0)
        return n+suma(n-m,m);
}

int main (void)
{
    int m, n;
    printf("unesi broj n:");
    scanf("%d", &n);
    printf("unesi broj m:");
    scanf("%d", &m);
    int rez=suma(n,m);
    printf("Suma je: %d",rez);
    return 0;
}
