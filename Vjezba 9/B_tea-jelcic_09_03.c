#include <stdio.h>

typedef struct
{
    unsigned a,b;
}Razlomak;

Razlomak skrati (Razlomak raz)
{
    Razlomak rez = raz;
    int zaj, i;
    for (i=1; i<=raz.a && i<=raz.b;++i)
    {
        if(raz.a%i==0 && raz.b%i==0)
            zaj=i;
    }
    rez.a=raz.a/zaj;
    rez.b=raz.b/zaj;
    return rez;
}

Razlomak zbroji (Razlomak r, Razlomak r2)
{
    Razlomak n,rez;
    n.a=(r.a*r2.b+r.b*r2.a);
    n.b=(r.b*r2.b);
    rez=skrati(n);
    return rez;
}

Razlomak oduzmi(Razlomak r, Razlomak r2)
{
    Razlomak n,rez;
    n.a=(r.a*r2.b-r.b*r2.a);
    n.b=(r.b*r2.b);
    rez=skrati(n);
    return rez;
}

Razlomak pomnozi (Razlomak r, Razlomak r2)
{
    Razlomak n,rez;
    n.a=(r.a*r2.a);
    n.b=(r.b*r2.b);
    rez=skrati(n);
    return rez;
}

Razlomak podijeli (Razlomak r, Razlomak r2)
{
    Razlomak n,rez;
    n.a=(r.a*r2.b);
    n.b=(r.b*r2.a);
    rez=skrati(n);
    return rez;
}

int main(void)
{
    Razlomak r={1,2};
    Razlomak r2={1,3};
    Razlomak rez=zbroji(r,r2);
    printf("Rezultat zbrajanja je %u/%u\n",rez.a,rez.b);
    Razlomak rez1=oduzmi(r,r2);
    printf("Rezultat oduzimanja je %u/%u\n",rez1.a,rez1.b);
    Razlomak rez2=pomnozi(r,r2);
    printf("Rezultat mnozenja je %u/%u\n",rez2.a,rez2.b);
    Razlomak rez3=podijeli(r,r2);
    printf("Rezultat dijeljenja je %u/%u\n",rez3.a,rez3.b);
    return 0;
}

