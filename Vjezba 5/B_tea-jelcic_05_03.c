#include <stdio.h>

void binarni(unsigned broj)
{
    unsigned i=1<<31;
    while(i>0)
    {
        broj&i ? printf("1") : printf ("0");
        i>>=1;
    }
    return;
}

int main(void)
{
    unsigned broj;
    printf("Unesite broj:");
    scanf("%u",&broj),
    binarni(broj);
    return 0;
}
