#include <stdio.h>

int palindrom (unsigned n)
{
    int zadnja, prva;
    if (n == 0)
        return 1;
    zadnja = n%10;
    prva = n;
    while(prva/10!=0)
    {
        prva = prva/10;
        zadnja = zadnja*10;
    }
    if (prva != n%10)
        return 0;
    else
    {
        n = (n - zadnja)/10;
        return palindrom(n);
    }
}

int main (void)
{
    unsigned n;
    printf("unesi broj:");
    scanf("%u",&n);
    if (palindrom(n))
        printf("%u je palindrom.",n);
    else
        printf("%u nije palindrom.",n);
    return 0;
}
