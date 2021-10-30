#include <stdio.h>

int vraca_broj (int n)
{
    int zbroj=0,ostatak;
    while(n>0)
    {
        ostatak=n%10;
        if (ostatak!=9)
        {
            ostatak++;
            zbroj*=10;
            zbroj+=ostatak;
        }
        else
            zbroj*=10;
        n/=10;
    }
    n=zbroj;
    zbroj=0;
    while(n>0)
    {
        ostatak=n%10;
        zbroj*=10;
        zbroj+=ostatak;
        n/=10;
    }
    return zbroj;
}

int main(void)
{
    int n,rez;
    while(1)
    {
        printf("Unesi broj:");
        scanf("%d", &n);
        if ((n<10000)||(n>99999))
            continue;
        rez=vraca_broj(n);
        printf("Promijenjeni broj je %d", rez);
        break;
    }
    return 0;
}

