#include <stdio.h>

int prost(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}

int vraca_prost(int n)
{
    int i=n+1;
    while(1)
    {
        if(prost(i))
            break;
        i++;
    }
    return i;
}

int main(void)
{
    int n,rez;
    printf("Unesite broj:");
    scanf("%d", &n);
    if (n<=0)
        printf("Nedozvoljen unos!");
    else
    {
        rez=vraca_prost(n);
        printf("Iduci najmanji prost broj je %d",rez);
    }
    return 0;
}

