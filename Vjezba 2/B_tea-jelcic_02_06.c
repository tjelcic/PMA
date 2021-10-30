#include <stdio.h>

int main(void)
{
    int n,m,i,j;
    printf("Unesite sirinu mreze:");
    scanf("%d",&n);
    printf("Unesite visinu mreze:");
    scanf("%d",&m);

    for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {
        if (((i%2!=0)&&(j%2!=0)) || ((i%2==0)&&(j%2==0)))
            printf("*");
        else if (((i%2!=0)&&(j%2==0)) || ((i%2==0)&&(j%2!=0)))
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
