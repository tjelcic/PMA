#include <stdio.h>

void isp_niz(int n)
{
    int rez;
    while (1)
    {
        if (n%2==1)
            rez=(3*n)+1;
        else
            rez=n/2;
        printf("%d,",n);
        n=rez;
        if (n==1)
        {
            printf("%d",n);
            break;
        }
    }
    return;
}

int main(void)
{
    int n;
    printf("Unesite broj:");
    scanf("%d",&n);
    isp_niz(n);
    return 0;
}
