#include <stdio.h>
#include <stdlib.h>

int drugi_niz (int niz [], int a, int n)
{
    int *drugi,i;
    drugi=(int*)malloc(n*(sizeof(int)));
    if (drugi==NULL)
        return 0;
    for (i=0;i<n;i++)
        drugi[i]=niz[i]*a;
    return drugi;
}

int main (void)
{
    int niz[5],*drugi,a,i,n;
    printf("Unesite broj elemenata niza:");
    scanf("%d",&n);
    printf("Unesite clanove niza:");
    for (i=0;i<n;i++)
        scanf("%d",&niz[i]);
    printf("Unesite parametar a:");
    scanf("%d",&a);
    drugi=drugi_niz(niz,a,n);
    for (i=0;i<n;i++)
        printf("%d ",*(drugi+i));
    free(drugi);
    return 0;
}


