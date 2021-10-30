#include <stdio.h>

int iduci_fib (int n)
{
    static int prvi=0, drugi=1, treci;

    if (n>0)
    {
        treci=prvi+drugi;
        prvi=drugi;
        drugi=treci;
        printf("%d\n",treci);
        iduci_fib(n-1);
    }
}

int main(void)
{
    int n;
    printf("unesi clan niza:");
    scanf("%d",&n);
    printf("0\n");
    printf("1\n");
    iduci_fib(n-1);
    return 0;
}
