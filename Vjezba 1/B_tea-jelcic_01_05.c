#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int poc,kraj,x,y;
    printf("Unesite interval:");
    scanf("%d %d", &poc, &kraj);
    srand((unsigned) time(NULL));
    x=poc+rand()%(kraj-poc+1);
    y=poc+rand()%(kraj-poc+1);
    if (x>y)
        printf("Pseudoslucajni brojevi su %d %d\nVeci broj je %d",x,y,x);
    if (y>x)
        printf("Pseudoslucajni brojevi su %d %d\nVeci broj je %d",x,y,y);
    return 0;

}
