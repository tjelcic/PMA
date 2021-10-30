#include <stdio.h>

int main(void)
{
    unsigned n,znam=1;
    printf("Unesite broj:");
    scanf("%d",&n);

    while(n>=10)
    {
        n/=10;
        znam+=1;
    }
    printf("Broj ima %d znamenki", znam);
    return 0;
}
