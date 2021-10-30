#include <stdio.h>

unsigned znam (unsigned broj)
{
    unsigned cnt=1;
    while(broj>=10)
    {
        broj/=10;
        cnt+=1;
    }
    return cnt;
}

int main(void)
{
    unsigned n,rez;
    printf("Unesite broj:");
    scanf("%d",&n);
    rez=znam(n);
    printf("Broj ima %d znamenki", rez);
    return 0;
}
