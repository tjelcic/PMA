#include <stdio.h>
#include <stdlib.h>

int* umetni ( int prvi[],int drugi[], int *treci, int n)
{
    int v=n+6,i,*novi = (int*)malloc(n*(sizeof(int)));
    if (novi==NULL)
        return 0;
    for (i=0;i<v;i++)
    {
         if (i<3)
            novi[i]=prvi[i];
         else if ((i>=3) && (i<(n+3)))
            novi[i]=treci[i-3];
         else if (i>=3+n)
            novi[i]=drugi[i-3-n];
    }
    return novi;
}

int main (void)
{
    int prvi[3]={1,2,3}, drugi[3]={4,5,6},*novi,n,i;
    printf("Unesite broj elemenata niza:");
    scanf("%d",&n);
    int *treci=(int*)malloc(n*(sizeof(int)));
    printf("Unesite clanove niza:");
    for (i=0;i<n;i++)
        scanf("%d", treci+i);
    novi=umetni(prvi,drugi,treci,n);
    int v=n+6;
    printf("Novi niz je:\n");
    for (i=0;i<v;i++)
        printf("%d ",*(novi+i));
    free(treci);
    free(novi);
    return 0;
}

