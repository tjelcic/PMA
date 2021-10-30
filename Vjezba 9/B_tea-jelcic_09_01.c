#include <stdio.h>
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define MIN1(a,b,c) MIN(MIN(a, b), c)
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MAX1(a,b,c) MAX(MAX(a, b), c)

void najm_i_najv (int a, int b, int c, int *pmanji, int *pveci)
{
    *pmanji=MIN1(a,b,c);
    *pveci=MAX1(a,b,c);
}

int main(void)
{
    int a, b, c, manji, veci;
    printf("Unesite tri broja:\n");
    scanf("%d %d %d", &a, &b, &c);
    najm_i_najv(a,b,c,&manji,&veci);
    printf("Najmanji broj je %d, a najveci %d", manji, veci);
    return 0;
}
