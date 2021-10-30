#include <stdio.h>
int main(void)
{
    int a, b, c;
    int najmanji, srednji, najveci;
    printf("Unesite tri broja\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c && b > c)
        {najveci=a;
        srednji=b;
        najmanji=c;}
    if (a > b && a > c && c > b)
        {najveci=a;
        srednji=c;
        najmanji=b;}
    if (b > a && b > c && a > c)
        {najveci=b;
        srednji=a;
        najmanji=c;}
    if (b > a && b > c && c > a)
        {najveci=b;
        srednji=c;
        najmanji=a;}
    if (c > a && c > b && a > b)
        {najveci=c;
        srednji=a;
        najmanji=b;}
    if (c > a && c > b && b > a)
        {najveci=c;
        srednji=b;
        najmanji=a;}
    printf("Najmanji je %d\n Srednji je %d\n Najveæi je%d\n", najmanji, srednji, najveci);
    return 0;
}
