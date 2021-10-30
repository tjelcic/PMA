#include <stdio.h>

int main(void)
{
    int a,b,c,d,e,f,poc,kraj,trajanje,h,m,s;
    printf("Unesite vrijeme pocetka i kraja filma");
    scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
    poc=c+(b*60)+(a*3600);
    kraj=f+(e*60)+(d*3600);
    trajanje=kraj-poc;
    h=trajanje/3600;
    m=(trajanje -(3600*h))/60;
    s=(trajanje -(3600*h)-(m*60));
    printf("Film je trajao %d h %d m %d s",h,m,s);
    return 0;
}
