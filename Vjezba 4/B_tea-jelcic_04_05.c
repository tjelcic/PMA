#include <stdio.h>

int prijestupna (int g)
{
    if ((g%4==0 && g%100!=0)||(g%400==0))
        return 1;
    else
        return 0;
}

int validan(int d,int m,int g)
{
    if ((g>=1900)&&(g<=2019))
    {
        if ((m>=1)&&(m<=12))
        {
            if (((d>=1)&&(d<=31)) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 ))
                return 1;
            else if (((d>=1)&&(d<=30)) && (m==4 || m==6 || m==9 || m==11))
                return 1;
            else if (((d>=1)&&(d<=28)) && (m==2))
                return 1;
            else if ((d>=1)&&(d<=29)&& (m==2)&&(prijestupna(g)==1))
                return 1;
            else
                return 0;
        }
    }
}

int main(void)
{
    int n,i,d,m,g;
    printf("Unesite broj osoba:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Unesite datum u formatu D/M/G:");
        scanf("%d/%d/%d", &d,&m,&g);
        if ((validan(d,m,g)==1) && (prijestupna(g)==1))
            printf("validan-prijestupna\n");
        else if (validan(d,m,g)==1)
            printf("validan-nije prijestupna\n");
        else
            printf("nije validan\n");
    }
    return 0;
}
