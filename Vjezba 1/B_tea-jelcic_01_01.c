#include <stdio.h>

int main(void)
{
    int a,b,d,e;
    char c;
    printf("Unesite dva cijela broja i jedan znak\n");
    scanf("%d %d %c",&a,&b,&c);
    if (c=='/' && b!=0)
        {
            d=a/b;
            e=a%b;
            printf("Rezultat je %d\nOstatak je %d",d,e);
        }
    else if (c=='+')
        {
            d=a+b;
            printf("Rezultat je %d\n",d);
        }
    else if (c=='-')
        {
            d=a-b;
            printf("Rezultat je %d\n",d);
        }
    else if (c=='*')
        {
            d=a*b;
            printf("Rezultat je %d\n",d);
        }
    else
        printf("Unijeli ste nedopusteni znak");
    return 0;
}

