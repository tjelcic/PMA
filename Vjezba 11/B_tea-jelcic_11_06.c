#include <stdio.h>
#include <string.h>

typedef struct
{
    char ime[100];
    char prezime[100];
    char jmbag[100];
    char razred;
} ucenik;

int compare_uzlazno(const void * a, const void * b)
{
    const ucenik*x=a, *y=b;
    return strcmp(x->prezime,y->prezime);
}

int compare_silazno(const void * a, const void * b)
{
    const ucenik*x=a, *y=b;
    return strcmp(y->prezime,x->prezime);
}

void unesi_niz(ucenik* a, int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        printf("Unesi ime i prezime, jmbag i razred:\n");
        scanf("%s %s %s %c",a[i].ime,a[i].prezime,a[i].jmbag,&a[i].razred);
    }
}

void ispisi_niz(ucenik* a, int n)
{
    int i;
    for (i=0;i<n;++i)
        printf("%s %s %s %c\n",a[i].ime,a[i].prezime,a[i].jmbag,a[i].razred);
}

void sortiraj_niz_uzlazno (ucenik* a, int n)
{
    qsort(a,n,sizeof(ucenik),compare_uzlazno);
}

void sortiraj_niz_silazno (ucenik* a, int n)
{
    qsort(a,n,sizeof(ucenik),compare_silazno);
}

int main (void)
{
    ucenik ucenici[10];
    int n;
    printf("unesi broj ucenika:");
    scanf("%d",&n);
    unesi_niz(ucenici,n);
    printf("sortirani niz uzlazno po prezimenu:\n");
    sortiraj_niz_uzlazno(ucenici,n);
    ispisi_niz(ucenici,n);
    printf("sortirani niz silazno po prezimenu:\n");
    sortiraj_niz_silazno(ucenici,n);
    ispisi_niz(ucenici,n);
    return 0;
}
