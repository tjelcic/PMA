#include <stdio.h>

void ispisi_bin (int n)
{
    if (n==0) return;
    ispisi_bin(n/2);
    printf("%d",n%2);
}

int main(void)
{
    int n;
    printf("Unesi broj:");
    scanf("%d",&n);
    ispisi_bin(n);
    return 0;
}
