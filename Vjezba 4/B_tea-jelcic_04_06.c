#include <stdio.h>

int rod (int d,int m,int g)
{
    int flag;
    if ((g>=1900)&&(g<=2019))
    {
        if ((m>=1)&&(m<=12))
        {
            if (((d>=1)&&(d<=31)) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 ))
                flag=1;
            else if (((d>=1)&&(d<=30)) && (m==4 || m==6 || m==9 || m==11))
                flag=1;
            else if (((d>=1)&&(d<=28)) && (m==2))
                flag=1;
            else if ((d>=1)&&(d<=29)&& (m==2)&&((g%4==0 && g%100!=0)||(g%400==0)))
                flag=1;
            else
                flag=0;
        }
    }
    int broj_rod;
    if (flag==1 && d==29 && m==2 &&((g%4==0 && g%100!=0)||(g%400==0)))
        broj_rod=(2021-g)/4;
    else if (flag==1 && m<4)
        broj_rod=2021-g;
    else if (flag==1 && m==4 && d<=12)
        broj_rod=2021-g;
    else if (flag==1)
        broj_rod=2020-g;
    else
    {
        printf("Datum nije validan\n");
        broj_rod=0;
    }
    return broj_rod;
}

int main(void)
{
    int d,m,g,rez;
    while (1)
    {
        printf("Unesite datum u formatu D/M/G:");
        scanf("%d/%d/%d", &d,&m,&g);
        rez=rod(d,m,g);
        if (rez==0)
            continue;
        printf("Osoba je proslavila %d rodendana\n", rez);
        if ((g%4==0 && g%100!=0)||(g%400==0))
            break;
    }
    return 0;
}
