#include <stdio.h>

void ispisi_nep (int n)
{
    if (n==1)
        printf("1");
    else if (n%2==0)
    {
        ispisi_nep(n-1);
    }
    else if (n%2!=0)
    {
        printf("%d\n",n);
        ispisi_nep(n-2);
    }
}

int main (void)
{
    int n;
    printf("Unesi broj:");
    scanf("%d",&n);
    ispisi_nep(n);
    return 0;
}
