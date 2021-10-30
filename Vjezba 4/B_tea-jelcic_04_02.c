#include <stdio.h>

int n_ti (int a, int n, int d)
{
    int i;
    for (i=1;i<n;i++)
        a+=d;
    return a;
}

int main(void)
{
    int a,d,n,rez;
    printf("Unesite prvi clan:");
    scanf("%d",&a);
    printf("Unesite udaljenost:");
    scanf("%d",&d);
    printf("Unesite n-ti clan:");
    scanf("%d",&n);
    rez=n_ti(a,n,d);
    printf("%d. clan je: %d", n,rez);
    return 0;
}
