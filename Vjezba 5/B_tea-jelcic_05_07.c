#include <stdio.h>


int main(void)
{
    int br_vj, br_st,i,br_pol;
    printf("unesite broj vjezbi i broj studenata:");
    scanf("%d %d", &br_vj,&br_st);
    for (i=1,i<=br_st,i++)
    {
        printf("Koliko je vjezbi polozio student:");
        scanf("%d",&br_pol);
        int n,st;
        for (i=1,i<=br_pol,i++)
        {
            printf("Unesite broj polozene vjezbe:");
            scanf("%d",&n);
            if (n==1)
                st=1;
            else
                st=0 | 1<<(n-1);

        }


    }
}
