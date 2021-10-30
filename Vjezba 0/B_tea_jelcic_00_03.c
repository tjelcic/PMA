#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    printf("Unesi dvije vrijednosti\n");
    scanf("%d %d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("Zamijenjene vrijednosti su %d %d\n", a, b);
    return 0;
}
